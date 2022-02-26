{
  "targets": [
    {
      "target_name": "gljs",
      "sources": ["gljs.cpp"],
       "include_dirs" : [
       	 			"<!(node -e \"require('nan')\")"
       ]
    },
    {
      "target_name": "glfw",
      "sources": ["node-glfw/src/glfw.cc"],
       "include_dirs" : [
       	 			"<!(node -e \"require('nan')\")"
       ]
    }
  ]
}
