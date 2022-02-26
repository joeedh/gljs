{
  "targets": [
    {
      "target_name": "gljs",
      "sources": ["gljs.cpp" ],
       "include_dirs" : [
       	 			"<!(node -e \"require('nan')\")"
       ]
    }
  ]
}
