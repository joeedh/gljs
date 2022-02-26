/* Warning: auto-generated code! */
#include <nan.h>
#include <cstdio>

#include <GL/gl.h>
//#include <GL/glew.h>
//#include <GL/glfw.h>

using v8::FunctionTemplate;

            
NAN_METHOD(accum) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glAccum(arg0,arg1);

}

      
NAN_METHOD(alphaFunc) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glclampf");
    return;
  }
  
  GLclampf arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glAlphaFunc(arg0,arg1);

}

      
NAN_METHOD(areTexturesResident) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg1_tarray(info[1]);
  GLuint* arg1 = reinterpret_cast<GLuint*>(*arg1_tarray);
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<boolean> arg2_tarray(info[2]);
  GLboolean* arg2 = reinterpret_cast<GLboolean*>(*arg2_tarray);


  auto retval = glAreTexturesResident(arg0,arg1,arg2);

  info.GetReturnValue().Set(retval);
      
}

      
NAN_METHOD(arrayElement) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glArrayElement(arg0);

}

      
NAN_METHOD(begin) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glBegin(arg0);

}

      
NAN_METHOD(bindTexture) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gluint");
    return;
  }
  
  GLuint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glBindTexture(arg0,arg1);

}

      
NAN_METHOD(bitmap) {
  if (info.Length() != 7) {
    Nan::ThrowError("Expected 7 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glfloat");
    return;
  }
  
  GLfloat arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glfloat");
    return;
  }
  
  GLfloat arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 7, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned char> arg6_tarray(info[6]);
  GLubyte* arg6 = reinterpret_cast<GLubyte*>(*arg6_tarray);


  glBitmap(arg0,arg1,arg2,arg3,arg4,arg5,arg6);

}

      
NAN_METHOD(blendFunc) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glBlendFunc(arg0,arg1);

}

      
NAN_METHOD(callList) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glCallList(arg0);

}

      
NAN_METHOD(callLists) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg2_tarray(info[2]);
  GLvoid* arg2 = reinterpret_cast<GLvoid*>(*arg2_tarray);


  glCallLists(arg0,arg1,arg2);

}

      
NAN_METHOD(clear) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glbitfield");
    return;
  }
  
  GLbitfield arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glClear(arg0);

}

      
NAN_METHOD(clearAccum) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glClearAccum(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(clearColor) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glclampf");
    return;
  }
  
  GLclampf arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glclampf");
    return;
  }
  
  GLclampf arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glclampf");
    return;
  }
  
  GLclampf arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glclampf");
    return;
  }
  
  GLclampf arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glClearColor(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(clearDepth) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glclampd");
    return;
  }
  
  GLclampd arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glClearDepth(arg0);

}

      
NAN_METHOD(clearIndex) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glClearIndex(arg0);

}

      
NAN_METHOD(clearStencil) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glClearStencil(arg0);

}

      
NAN_METHOD(clipPlane) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg1_tarray(info[1]);
  GLdouble* arg1 = reinterpret_cast<GLdouble*>(*arg1_tarray);


  glClipPlane(arg0,arg1);

}

      
NAN_METHOD(color3b) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glbyte");
    return;
  }
  
  GLbyte arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glbyte");
    return;
  }
  
  GLbyte arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glbyte");
    return;
  }
  
  GLbyte arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3b(arg0,arg1,arg2);

}

      
NAN_METHOD(color3bv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg0_tarray(info[0]);
  GLbyte* arg0 = reinterpret_cast<GLbyte*>(*arg0_tarray);


  glColor3bv(arg0);

}

      
NAN_METHOD(color3d) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3d(arg0,arg1,arg2);

}

      
NAN_METHOD(color3dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glColor3dv(arg0);

}

      
NAN_METHOD(color3f) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3f(arg0,arg1,arg2);

}

      
NAN_METHOD(color3fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glColor3fv(arg0);

}

      
NAN_METHOD(color3i) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3i(arg0,arg1,arg2);

}

      
NAN_METHOD(color3iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glColor3iv(arg0);

}

      
NAN_METHOD(color3s) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3s(arg0,arg1,arg2);

}

      
NAN_METHOD(color3sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glColor3sv(arg0);

}

      
NAN_METHOD(color3ub) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glubyte");
    return;
  }
  
  GLubyte arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glubyte");
    return;
  }
  
  GLubyte arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glubyte");
    return;
  }
  
  GLubyte arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3ub(arg0,arg1,arg2);

}

      
NAN_METHOD(color3ubv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned char> arg0_tarray(info[0]);
  GLubyte* arg0 = reinterpret_cast<GLubyte*>(*arg0_tarray);


  glColor3ubv(arg0);

}

      
NAN_METHOD(color3ui) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gluint");
    return;
  }
  
  GLuint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gluint");
    return;
  }
  
  GLuint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3ui(arg0,arg1,arg2);

}

      
NAN_METHOD(color3uiv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg0_tarray(info[0]);
  GLuint* arg0 = reinterpret_cast<GLuint*>(*arg0_tarray);


  glColor3uiv(arg0);

}

      
NAN_METHOD(color3us) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glushort");
    return;
  }
  
  GLushort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glushort");
    return;
  }
  
  GLushort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glushort");
    return;
  }
  
  GLushort arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glColor3us(arg0,arg1,arg2);

}

      
NAN_METHOD(color3usv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned short> arg0_tarray(info[0]);
  GLushort* arg0 = reinterpret_cast<GLushort*>(*arg0_tarray);


  glColor3usv(arg0);

}

      
NAN_METHOD(color4b) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glbyte");
    return;
  }
  
  GLbyte arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glbyte");
    return;
  }
  
  GLbyte arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glbyte");
    return;
  }
  
  GLbyte arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glbyte");
    return;
  }
  
  GLbyte arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4b(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4bv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg0_tarray(info[0]);
  GLbyte* arg0 = reinterpret_cast<GLbyte*>(*arg0_tarray);


  glColor4bv(arg0);

}

      
NAN_METHOD(color4d) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4d(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glColor4dv(arg0);

}

      
NAN_METHOD(color4f) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4f(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glColor4fv(arg0);

}

      
NAN_METHOD(color4i) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4i(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glColor4iv(arg0);

}

      
NAN_METHOD(color4s) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glshort");
    return;
  }
  
  GLshort arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4s(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glColor4sv(arg0);

}

      
NAN_METHOD(color4ub) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glubyte");
    return;
  }
  
  GLubyte arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glubyte");
    return;
  }
  
  GLubyte arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glubyte");
    return;
  }
  
  GLubyte arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glubyte");
    return;
  }
  
  GLubyte arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4ub(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4ubv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned char> arg0_tarray(info[0]);
  GLubyte* arg0 = reinterpret_cast<GLubyte*>(*arg0_tarray);


  glColor4ubv(arg0);

}

      
NAN_METHOD(color4ui) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gluint");
    return;
  }
  
  GLuint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gluint");
    return;
  }
  
  GLuint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gluint");
    return;
  }
  
  GLuint arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4ui(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4uiv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg0_tarray(info[0]);
  GLuint* arg0 = reinterpret_cast<GLuint*>(*arg0_tarray);


  glColor4uiv(arg0);

}

      
NAN_METHOD(color4us) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glushort");
    return;
  }
  
  GLushort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glushort");
    return;
  }
  
  GLushort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glushort");
    return;
  }
  
  GLushort arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glushort");
    return;
  }
  
  GLushort arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColor4us(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(color4usv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned short> arg0_tarray(info[0]);
  GLushort* arg0 = reinterpret_cast<GLushort*>(*arg0_tarray);


  glColor4usv(arg0);

}

      
NAN_METHOD(colorMask) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glboolean");
    return;
  }
  
  GLboolean arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glboolean");
    return;
  }
  
  GLboolean arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glboolean");
    return;
  }
  
  GLboolean arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glboolean");
    return;
  }
  
  GLboolean arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glColorMask(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(colorMaterial) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glColorMaterial(arg0,arg1);

}

      
NAN_METHOD(colorPointer) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 4, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg3_tarray(info[3]);
  GLvoid* arg3 = reinterpret_cast<GLvoid*>(*arg3_tarray);


  glColorPointer(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(copyPixels) {
  if (info.Length() != 5) {
    Nan::ThrowError("Expected 5 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glsizei");
    return;
  }
  
  GLsizei arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glenum");
    return;
  }
  
  GLenum arg4 = info[4]->Uint32Value(ctx).ToChecked();


  glCopyPixels(arg0,arg1,arg2,arg3,arg4);

}

      
NAN_METHOD(copyTexImage1D) {
  if (info.Length() != 7) {
    Nan::ThrowError("Expected 7 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glsizei");
    return;
  }
  
  GLsizei arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a glint");
    return;
  }
  
  GLint arg6 = info[6]->Uint32Value(ctx).ToChecked();


  glCopyTexImage1D(arg0,arg1,arg2,arg3,arg4,arg5,arg6);

}

      
NAN_METHOD(copyTexImage2D) {
  if (info.Length() != 8) {
    Nan::ThrowError("Expected 8 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glsizei");
    return;
  }
  
  GLsizei arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a glsizei");
    return;
  }
  
  GLsizei arg6 = info[6]->Uint32Value(ctx).ToChecked();
  if (!info[7]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 8, expected a glint");
    return;
  }
  
  GLint arg7 = info[7]->Uint32Value(ctx).ToChecked();


  glCopyTexImage2D(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);

}

      
NAN_METHOD(copyTexSubImage1D) {
  if (info.Length() != 6) {
    Nan::ThrowError("Expected 6 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glsizei");
    return;
  }
  
  GLsizei arg5 = info[5]->Uint32Value(ctx).ToChecked();


  glCopyTexSubImage1D(arg0,arg1,arg2,arg3,arg4,arg5);

}

      
NAN_METHOD(copyTexSubImage2D) {
  if (info.Length() != 8) {
    Nan::ThrowError("Expected 8 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glint");
    return;
  }
  
  GLint arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a glsizei");
    return;
  }
  
  GLsizei arg6 = info[6]->Uint32Value(ctx).ToChecked();
  if (!info[7]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 8, expected a glsizei");
    return;
  }
  
  GLsizei arg7 = info[7]->Uint32Value(ctx).ToChecked();


  glCopyTexSubImage2D(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);

}

      
NAN_METHOD(cullFace) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glCullFace(arg0);

}

      
NAN_METHOD(deleteLists) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glDeleteLists(arg0,arg1);

}

      
NAN_METHOD(deleteTextures) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg1_tarray(info[1]);
  GLuint* arg1 = reinterpret_cast<GLuint*>(*arg1_tarray);


  glDeleteTextures(arg0,arg1);

}

      
NAN_METHOD(depthFunc) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glDepthFunc(arg0);

}

      
NAN_METHOD(depthMask) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glboolean");
    return;
  }
  
  GLboolean arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glDepthMask(arg0);

}

      
NAN_METHOD(depthRange) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glclampd");
    return;
  }
  
  GLclampd arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glclampd");
    return;
  }
  
  GLclampd arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glDepthRange(arg0,arg1);

}

      
NAN_METHOD(disable) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glDisable(arg0);

}

      
NAN_METHOD(disableClientState) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glDisableClientState(arg0);

}

      
NAN_METHOD(drawArrays) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glDrawArrays(arg0,arg1,arg2);

}

      
NAN_METHOD(drawBuffer) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glDrawBuffer(arg0);

}

      
NAN_METHOD(drawElements) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 4, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg3_tarray(info[3]);
  GLvoid* arg3 = reinterpret_cast<GLvoid*>(*arg3_tarray);


  glDrawElements(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(drawPixels) {
  if (info.Length() != 5) {
    Nan::ThrowError("Expected 5 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glenum");
    return;
  }
  
  GLenum arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 5, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg4_tarray(info[4]);
  GLvoid* arg4 = reinterpret_cast<GLvoid*>(*arg4_tarray);


  glDrawPixels(arg0,arg1,arg2,arg3,arg4);

}

      
NAN_METHOD(edgeFlag) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glboolean");
    return;
  }
  
  GLboolean arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glEdgeFlag(arg0);

}

      
NAN_METHOD(edgeFlagPointer) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg1_tarray(info[1]);
  GLvoid* arg1 = reinterpret_cast<GLvoid*>(*arg1_tarray);


  glEdgeFlagPointer(arg0,arg1);

}

      
NAN_METHOD(edgeFlagv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<boolean> arg0_tarray(info[0]);
  GLboolean* arg0 = reinterpret_cast<GLboolean*>(*arg0_tarray);


  glEdgeFlagv(arg0);

}

      
NAN_METHOD(enable) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glEnable(arg0);

}

      
NAN_METHOD(enableClientState) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glEnableClientState(arg0);

}

      
NAN_METHOD(end) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glEnd();

}

      
NAN_METHOD(endList) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glEndList();

}

      
NAN_METHOD(evalCoord1d) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glEvalCoord1d(arg0);

}

      
NAN_METHOD(evalCoord1dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glEvalCoord1dv(arg0);

}

      
NAN_METHOD(evalCoord1f) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glEvalCoord1f(arg0);

}

      
NAN_METHOD(evalCoord1fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glEvalCoord1fv(arg0);

}

      
NAN_METHOD(evalCoord2d) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glEvalCoord2d(arg0,arg1);

}

      
NAN_METHOD(evalCoord2dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glEvalCoord2dv(arg0);

}

      
NAN_METHOD(evalCoord2f) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glEvalCoord2f(arg0,arg1);

}

      
NAN_METHOD(evalCoord2fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glEvalCoord2fv(arg0);

}

      
NAN_METHOD(evalMesh1) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glEvalMesh1(arg0,arg1,arg2);

}

      
NAN_METHOD(evalMesh2) {
  if (info.Length() != 5) {
    Nan::ThrowError("Expected 5 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();


  glEvalMesh2(arg0,arg1,arg2,arg3,arg4);

}

      
NAN_METHOD(evalPoint1) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glEvalPoint1(arg0);

}

      
NAN_METHOD(evalPoint2) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glEvalPoint2(arg0,arg1);

}

      
NAN_METHOD(feedbackBuffer) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glFeedbackBuffer(arg0,arg1,arg2);

}

      
NAN_METHOD(finish) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glFinish();

}

      
NAN_METHOD(flush) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glFlush();

}

      
NAN_METHOD(fogf) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glFogf(arg0,arg1);

}

      
NAN_METHOD(fogfv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg1_tarray(info[1]);
  GLfloat* arg1 = reinterpret_cast<GLfloat*>(*arg1_tarray);


  glFogfv(arg0,arg1);

}

      
NAN_METHOD(fogi) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glFogi(arg0,arg1);

}

      
NAN_METHOD(fogiv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg1_tarray(info[1]);
  GLint* arg1 = reinterpret_cast<GLint*>(*arg1_tarray);


  glFogiv(arg0,arg1);

}

      
NAN_METHOD(frontFace) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glFrontFace(arg0);

}

      
NAN_METHOD(frustum) {
  if (info.Length() != 6) {
    Nan::ThrowError("Expected 6 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a gldouble");
    return;
  }
  
  GLdouble arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a gldouble");
    return;
  }
  
  GLdouble arg5 = info[5]->Uint32Value(ctx).ToChecked();


  glFrustum(arg0,arg1,arg2,arg3,arg4,arg5);

}

      
NAN_METHOD(genLists) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();


  auto retval = glGenLists(arg0);

  info.GetReturnValue().Set(retval);
      
}

      
NAN_METHOD(genTextures) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg1_tarray(info[1]);
  GLuint* arg1 = reinterpret_cast<GLuint*>(*arg1_tarray);


  glGenTextures(arg0,arg1);

}

      
NAN_METHOD(getBooleanv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<boolean> arg1_tarray(info[1]);
  GLboolean* arg1 = reinterpret_cast<GLboolean*>(*arg1_tarray);


  glGetBooleanv(arg0,arg1);

}

      
NAN_METHOD(getClipPlane) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg1_tarray(info[1]);
  GLdouble* arg1 = reinterpret_cast<GLdouble*>(*arg1_tarray);


  glGetClipPlane(arg0,arg1);

}

      
NAN_METHOD(getDoublev) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg1_tarray(info[1]);
  GLdouble* arg1 = reinterpret_cast<GLdouble*>(*arg1_tarray);


  glGetDoublev(arg0,arg1);

}

      
NAN_METHOD(getError) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  auto retval = glGetError();

  info.GetReturnValue().Set(retval);
      
}

      
NAN_METHOD(getFloatv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg1_tarray(info[1]);
  GLfloat* arg1 = reinterpret_cast<GLfloat*>(*arg1_tarray);


  glGetFloatv(arg0,arg1);

}

      
NAN_METHOD(getIntegerv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg1_tarray(info[1]);
  GLint* arg1 = reinterpret_cast<GLint*>(*arg1_tarray);


  glGetIntegerv(arg0,arg1);

}

      
NAN_METHOD(getLightfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glGetLightfv(arg0,arg1,arg2);

}

      
NAN_METHOD(getLightiv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glGetLightiv(arg0,arg1,arg2);

}

      
NAN_METHOD(getMapdv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg2_tarray(info[2]);
  GLdouble* arg2 = reinterpret_cast<GLdouble*>(*arg2_tarray);


  glGetMapdv(arg0,arg1,arg2);

}

      
NAN_METHOD(getMapfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glGetMapfv(arg0,arg1,arg2);

}

      
NAN_METHOD(getMapiv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glGetMapiv(arg0,arg1,arg2);

}

      
NAN_METHOD(getMaterialfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glGetMaterialfv(arg0,arg1,arg2);

}

      
NAN_METHOD(getMaterialiv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glGetMaterialiv(arg0,arg1,arg2);

}

      
NAN_METHOD(getPixelMapfv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg1_tarray(info[1]);
  GLfloat* arg1 = reinterpret_cast<GLfloat*>(*arg1_tarray);


  glGetPixelMapfv(arg0,arg1);

}

      
NAN_METHOD(getPixelMapuiv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg1_tarray(info[1]);
  GLuint* arg1 = reinterpret_cast<GLuint*>(*arg1_tarray);


  glGetPixelMapuiv(arg0,arg1);

}

      
NAN_METHOD(getPixelMapusv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned short> arg1_tarray(info[1]);
  GLushort* arg1 = reinterpret_cast<GLushort*>(*arg1_tarray);


  glGetPixelMapusv(arg0,arg1);

}

      
NAN_METHOD(getPointerv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<void*> arg1_tarray(info[1]);
  GLvoid** arg1 = reinterpret_cast<GLvoid**>(*arg1_tarray);


  glGetPointerv(arg0,arg1);

}

      
NAN_METHOD(getPolygonStipple) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned char> arg0_tarray(info[0]);
  GLubyte* arg0 = reinterpret_cast<GLubyte*>(*arg0_tarray);


  glGetPolygonStipple(arg0);

}

      
NAN_METHOD(getTexEnvfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glGetTexEnvfv(arg0,arg1,arg2);

}

      
NAN_METHOD(getTexEnviv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glGetTexEnviv(arg0,arg1,arg2);

}

      
NAN_METHOD(getTexGendv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg2_tarray(info[2]);
  GLdouble* arg2 = reinterpret_cast<GLdouble*>(*arg2_tarray);


  glGetTexGendv(arg0,arg1,arg2);

}

      
NAN_METHOD(getTexGenfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glGetTexGenfv(arg0,arg1,arg2);

}

      
NAN_METHOD(getTexGeniv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glGetTexGeniv(arg0,arg1,arg2);

}

      
NAN_METHOD(getTexImage) {
  if (info.Length() != 5) {
    Nan::ThrowError("Expected 5 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glenum");
    return;
  }
  
  GLenum arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 5, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg4_tarray(info[4]);
  GLvoid* arg4 = reinterpret_cast<GLvoid*>(*arg4_tarray);


  glGetTexImage(arg0,arg1,arg2,arg3,arg4);

}

      
NAN_METHOD(getTexLevelParameterfv) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 4, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg3_tarray(info[3]);
  GLfloat* arg3 = reinterpret_cast<GLfloat*>(*arg3_tarray);


  glGetTexLevelParameterfv(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(getTexLevelParameteriv) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 4, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg3_tarray(info[3]);
  GLint* arg3 = reinterpret_cast<GLint*>(*arg3_tarray);


  glGetTexLevelParameteriv(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(getTexParameterfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glGetTexParameterfv(arg0,arg1,arg2);

}

      
NAN_METHOD(getTexParameteriv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glGetTexParameteriv(arg0,arg1,arg2);

}

      
NAN_METHOD(hint) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glHint(arg0,arg1);

}

      
NAN_METHOD(indexMask) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glIndexMask(arg0);

}

      
NAN_METHOD(indexPointer) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg2_tarray(info[2]);
  GLvoid* arg2 = reinterpret_cast<GLvoid*>(*arg2_tarray);


  glIndexPointer(arg0,arg1,arg2);

}

      
NAN_METHOD(indexd) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glIndexd(arg0);

}

      
NAN_METHOD(indexdv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glIndexdv(arg0);

}

      
NAN_METHOD(indexf) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glIndexf(arg0);

}

      
NAN_METHOD(indexfv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glIndexfv(arg0);

}

      
NAN_METHOD(indexi) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glIndexi(arg0);

}

      
NAN_METHOD(indexiv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glIndexiv(arg0);

}

      
NAN_METHOD(indexs) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glIndexs(arg0);

}

      
NAN_METHOD(indexsv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glIndexsv(arg0);

}

      
NAN_METHOD(indexub) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glubyte");
    return;
  }
  
  GLubyte arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glIndexub(arg0);

}

      
NAN_METHOD(indexubv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned char> arg0_tarray(info[0]);
  GLubyte* arg0 = reinterpret_cast<GLubyte*>(*arg0_tarray);


  glIndexubv(arg0);

}

      
NAN_METHOD(initNames) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glInitNames();

}

      
NAN_METHOD(interleavedArrays) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg2_tarray(info[2]);
  GLvoid* arg2 = reinterpret_cast<GLvoid*>(*arg2_tarray);


  glInterleavedArrays(arg0,arg1,arg2);

}

      
NAN_METHOD(isEnabled) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  auto retval = glIsEnabled(arg0);

  info.GetReturnValue().Set(retval);
      
}

      
NAN_METHOD(isList) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  auto retval = glIsList(arg0);

  info.GetReturnValue().Set(retval);
      
}

      
NAN_METHOD(isTexture) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  auto retval = glIsTexture(arg0);

  info.GetReturnValue().Set(retval);
      
}

      
NAN_METHOD(lightModelf) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glLightModelf(arg0,arg1);

}

      
NAN_METHOD(lightModelfv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg1_tarray(info[1]);
  GLfloat* arg1 = reinterpret_cast<GLfloat*>(*arg1_tarray);


  glLightModelfv(arg0,arg1);

}

      
NAN_METHOD(lightModeli) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glLightModeli(arg0,arg1);

}

      
NAN_METHOD(lightModeliv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg1_tarray(info[1]);
  GLint* arg1 = reinterpret_cast<GLint*>(*arg1_tarray);


  glLightModeliv(arg0,arg1);

}

      
NAN_METHOD(lightf) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glLightf(arg0,arg1,arg2);

}

      
NAN_METHOD(lightfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glLightfv(arg0,arg1,arg2);

}

      
NAN_METHOD(lighti) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glLighti(arg0,arg1,arg2);

}

      
NAN_METHOD(lightiv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glLightiv(arg0,arg1,arg2);

}

      
NAN_METHOD(lineStipple) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glushort");
    return;
  }
  
  GLushort arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glLineStipple(arg0,arg1);

}

      
NAN_METHOD(lineWidth) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glLineWidth(arg0);

}

      
NAN_METHOD(listBase) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glListBase(arg0);

}

      
NAN_METHOD(loadIdentity) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glLoadIdentity();

}

      
NAN_METHOD(loadMatrixd) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glLoadMatrixd(arg0);

}

      
NAN_METHOD(loadMatrixf) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glLoadMatrixf(arg0);

}

      
NAN_METHOD(loadName) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glLoadName(arg0);

}

      
NAN_METHOD(logicOp) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glLogicOp(arg0);

}

      
NAN_METHOD(map1d) {
  if (info.Length() != 6) {
    Nan::ThrowError("Expected 6 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 6, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg5_tarray(info[5]);
  GLdouble* arg5 = reinterpret_cast<GLdouble*>(*arg5_tarray);


  glMap1d(arg0,arg1,arg2,arg3,arg4,arg5);

}

      
NAN_METHOD(map1f) {
  if (info.Length() != 6) {
    Nan::ThrowError("Expected 6 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 6, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg5_tarray(info[5]);
  GLfloat* arg5 = reinterpret_cast<GLfloat*>(*arg5_tarray);


  glMap1f(arg0,arg1,arg2,arg3,arg4,arg5);

}

      
NAN_METHOD(map2d) {
  if (info.Length() != 10) {
    Nan::ThrowError("Expected 10 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a gldouble");
    return;
  }
  
  GLdouble arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a gldouble");
    return;
  }
  
  GLdouble arg6 = info[6]->Uint32Value(ctx).ToChecked();
  if (!info[7]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 8, expected a glint");
    return;
  }
  
  GLint arg7 = info[7]->Uint32Value(ctx).ToChecked();
  if (!info[8]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 9, expected a glint");
    return;
  }
  
  GLint arg8 = info[8]->Uint32Value(ctx).ToChecked();
  if (!info[9]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 10, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg9_tarray(info[9]);
  GLdouble* arg9 = reinterpret_cast<GLdouble*>(*arg9_tarray);


  glMap2d(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);

}

      
NAN_METHOD(map2f) {
  if (info.Length() != 10) {
    Nan::ThrowError("Expected 10 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glfloat");
    return;
  }
  
  GLfloat arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a glfloat");
    return;
  }
  
  GLfloat arg6 = info[6]->Uint32Value(ctx).ToChecked();
  if (!info[7]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 8, expected a glint");
    return;
  }
  
  GLint arg7 = info[7]->Uint32Value(ctx).ToChecked();
  if (!info[8]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 9, expected a glint");
    return;
  }
  
  GLint arg8 = info[8]->Uint32Value(ctx).ToChecked();
  if (!info[9]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 10, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg9_tarray(info[9]);
  GLfloat* arg9 = reinterpret_cast<GLfloat*>(*arg9_tarray);


  glMap2f(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);

}

      
NAN_METHOD(mapGrid1d) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glMapGrid1d(arg0,arg1,arg2);

}

      
NAN_METHOD(mapGrid1f) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glMapGrid1f(arg0,arg1,arg2);

}

      
NAN_METHOD(mapGrid2d) {
  if (info.Length() != 6) {
    Nan::ThrowError("Expected 6 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a gldouble");
    return;
  }
  
  GLdouble arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a gldouble");
    return;
  }
  
  GLdouble arg5 = info[5]->Uint32Value(ctx).ToChecked();


  glMapGrid2d(arg0,arg1,arg2,arg3,arg4,arg5);

}

      
NAN_METHOD(mapGrid2f) {
  if (info.Length() != 6) {
    Nan::ThrowError("Expected 6 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glfloat");
    return;
  }
  
  GLfloat arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glfloat");
    return;
  }
  
  GLfloat arg5 = info[5]->Uint32Value(ctx).ToChecked();


  glMapGrid2f(arg0,arg1,arg2,arg3,arg4,arg5);

}

      
NAN_METHOD(materialf) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glMaterialf(arg0,arg1,arg2);

}

      
NAN_METHOD(materialfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glMaterialfv(arg0,arg1,arg2);

}

      
NAN_METHOD(materiali) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glMateriali(arg0,arg1,arg2);

}

      
NAN_METHOD(materialiv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glMaterialiv(arg0,arg1,arg2);

}

      
NAN_METHOD(matrixMode) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glMatrixMode(arg0);

}

      
NAN_METHOD(multMatrixd) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glMultMatrixd(arg0);

}

      
NAN_METHOD(multMatrixf) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glMultMatrixf(arg0);

}

      
NAN_METHOD(newList) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glNewList(arg0,arg1);

}

      
NAN_METHOD(normal3b) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glbyte");
    return;
  }
  
  GLbyte arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glbyte");
    return;
  }
  
  GLbyte arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glbyte");
    return;
  }
  
  GLbyte arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glNormal3b(arg0,arg1,arg2);

}

      
NAN_METHOD(normal3bv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg0_tarray(info[0]);
  GLbyte* arg0 = reinterpret_cast<GLbyte*>(*arg0_tarray);


  glNormal3bv(arg0);

}

      
NAN_METHOD(normal3d) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glNormal3d(arg0,arg1,arg2);

}

      
NAN_METHOD(normal3dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glNormal3dv(arg0);

}

      
NAN_METHOD(normal3f) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glNormal3f(arg0,arg1,arg2);

}

      
NAN_METHOD(normal3fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glNormal3fv(arg0);

}

      
NAN_METHOD(normal3i) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glNormal3i(arg0,arg1,arg2);

}

      
NAN_METHOD(normal3iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glNormal3iv(arg0);

}

      
NAN_METHOD(normal3s) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glNormal3s(arg0,arg1,arg2);

}

      
NAN_METHOD(normal3sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glNormal3sv(arg0);

}

      
NAN_METHOD(normalPointer) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg2_tarray(info[2]);
  GLvoid* arg2 = reinterpret_cast<GLvoid*>(*arg2_tarray);


  glNormalPointer(arg0,arg1,arg2);

}

      
NAN_METHOD(ortho) {
  if (info.Length() != 6) {
    Nan::ThrowError("Expected 6 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a gldouble");
    return;
  }
  
  GLdouble arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a gldouble");
    return;
  }
  
  GLdouble arg5 = info[5]->Uint32Value(ctx).ToChecked();


  glOrtho(arg0,arg1,arg2,arg3,arg4,arg5);

}

      
NAN_METHOD(passThrough) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glPassThrough(arg0);

}

      
NAN_METHOD(pixelMapfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glPixelMapfv(arg0,arg1,arg2);

}

      
NAN_METHOD(pixelMapuiv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg2_tarray(info[2]);
  GLuint* arg2 = reinterpret_cast<GLuint*>(*arg2_tarray);


  glPixelMapuiv(arg0,arg1,arg2);

}

      
NAN_METHOD(pixelMapusv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glsizei");
    return;
  }
  
  GLsizei arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned short> arg2_tarray(info[2]);
  GLushort* arg2 = reinterpret_cast<GLushort*>(*arg2_tarray);


  glPixelMapusv(arg0,arg1,arg2);

}

      
NAN_METHOD(pixelStoref) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glPixelStoref(arg0,arg1);

}

      
NAN_METHOD(pixelStorei) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glPixelStorei(arg0,arg1);

}

      
NAN_METHOD(pixelTransferf) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glPixelTransferf(arg0,arg1);

}

      
NAN_METHOD(pixelTransferi) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glPixelTransferi(arg0,arg1);

}

      
NAN_METHOD(pixelZoom) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glPixelZoom(arg0,arg1);

}

      
NAN_METHOD(pointSize) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glPointSize(arg0);

}

      
NAN_METHOD(polygonMode) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glPolygonMode(arg0,arg1);

}

      
NAN_METHOD(polygonOffset) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glPolygonOffset(arg0,arg1);

}

      
NAN_METHOD(polygonStipple) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned char> arg0_tarray(info[0]);
  GLubyte* arg0 = reinterpret_cast<GLubyte*>(*arg0_tarray);


  glPolygonStipple(arg0);

}

      
NAN_METHOD(popAttrib) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glPopAttrib();

}

      
NAN_METHOD(popClientAttrib) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glPopClientAttrib();

}

      
NAN_METHOD(popMatrix) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glPopMatrix();

}

      
NAN_METHOD(popName) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glPopName();

}

      
NAN_METHOD(prioritizeTextures) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg1_tarray(info[1]);
  GLuint* arg1 = reinterpret_cast<GLuint*>(*arg1_tarray);
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLclampf* arg2 = reinterpret_cast<GLclampf*>(*arg2_tarray);


  glPrioritizeTextures(arg0,arg1,arg2);

}

      
NAN_METHOD(pushAttrib) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glbitfield");
    return;
  }
  
  GLbitfield arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glPushAttrib(arg0);

}

      
NAN_METHOD(pushClientAttrib) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glbitfield");
    return;
  }
  
  GLbitfield arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glPushClientAttrib(arg0);

}

      
NAN_METHOD(pushMatrix) {
  if (info.Length() != 0) {
    Nan::ThrowError("Expected 0 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();



  glPushMatrix();

}

      
NAN_METHOD(pushName) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glPushName(arg0);

}

      
NAN_METHOD(rasterPos2d) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glRasterPos2d(arg0,arg1);

}

      
NAN_METHOD(rasterPos2dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glRasterPos2dv(arg0);

}

      
NAN_METHOD(rasterPos2f) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glRasterPos2f(arg0,arg1);

}

      
NAN_METHOD(rasterPos2fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glRasterPos2fv(arg0);

}

      
NAN_METHOD(rasterPos2i) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glRasterPos2i(arg0,arg1);

}

      
NAN_METHOD(rasterPos2iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glRasterPos2iv(arg0);

}

      
NAN_METHOD(rasterPos2s) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glRasterPos2s(arg0,arg1);

}

      
NAN_METHOD(rasterPos2sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glRasterPos2sv(arg0);

}

      
NAN_METHOD(rasterPos3d) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glRasterPos3d(arg0,arg1,arg2);

}

      
NAN_METHOD(rasterPos3dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glRasterPos3dv(arg0);

}

      
NAN_METHOD(rasterPos3f) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glRasterPos3f(arg0,arg1,arg2);

}

      
NAN_METHOD(rasterPos3fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glRasterPos3fv(arg0);

}

      
NAN_METHOD(rasterPos3i) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glRasterPos3i(arg0,arg1,arg2);

}

      
NAN_METHOD(rasterPos3iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glRasterPos3iv(arg0);

}

      
NAN_METHOD(rasterPos3s) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glRasterPos3s(arg0,arg1,arg2);

}

      
NAN_METHOD(rasterPos3sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glRasterPos3sv(arg0);

}

      
NAN_METHOD(rasterPos4d) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRasterPos4d(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rasterPos4dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glRasterPos4dv(arg0);

}

      
NAN_METHOD(rasterPos4f) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRasterPos4f(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rasterPos4fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glRasterPos4fv(arg0);

}

      
NAN_METHOD(rasterPos4i) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRasterPos4i(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rasterPos4iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glRasterPos4iv(arg0);

}

      
NAN_METHOD(rasterPos4s) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glshort");
    return;
  }
  
  GLshort arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRasterPos4s(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rasterPos4sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glRasterPos4sv(arg0);

}

      
NAN_METHOD(readBuffer) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glReadBuffer(arg0);

}

      
NAN_METHOD(readPixels) {
  if (info.Length() != 7) {
    Nan::ThrowError("Expected 7 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glsizei");
    return;
  }
  
  GLsizei arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glenum");
    return;
  }
  
  GLenum arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glenum");
    return;
  }
  
  GLenum arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 7, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg6_tarray(info[6]);
  GLvoid* arg6 = reinterpret_cast<GLvoid*>(*arg6_tarray);


  glReadPixels(arg0,arg1,arg2,arg3,arg4,arg5,arg6);

}

      
NAN_METHOD(rectd) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRectd(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rectdv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg1_tarray(info[1]);
  GLdouble* arg1 = reinterpret_cast<GLdouble*>(*arg1_tarray);


  glRectdv(arg0,arg1);

}

      
NAN_METHOD(rectf) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRectf(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rectfv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg1_tarray(info[1]);
  GLfloat* arg1 = reinterpret_cast<GLfloat*>(*arg1_tarray);


  glRectfv(arg0,arg1);

}

      
NAN_METHOD(recti) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRecti(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rectiv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg1_tarray(info[1]);
  GLint* arg1 = reinterpret_cast<GLint*>(*arg1_tarray);


  glRectiv(arg0,arg1);

}

      
NAN_METHOD(rects) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glshort");
    return;
  }
  
  GLshort arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRects(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rectsv) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg1_tarray(info[1]);
  GLshort* arg1 = reinterpret_cast<GLshort*>(*arg1_tarray);


  glRectsv(arg0,arg1);

}

      
NAN_METHOD(renderMode) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  auto retval = glRenderMode(arg0);

  info.GetReturnValue().Set(retval);
      
}

      
NAN_METHOD(rotated) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRotated(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(rotatef) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glRotatef(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(scaled) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glScaled(arg0,arg1,arg2);

}

      
NAN_METHOD(scalef) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glScalef(arg0,arg1,arg2);

}

      
NAN_METHOD(scissor) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glsizei");
    return;
  }
  
  GLsizei arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glScissor(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(selectBuffer) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glsizei");
    return;
  }
  
  GLsizei arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 2, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<unsigned int> arg1_tarray(info[1]);
  GLuint* arg1 = reinterpret_cast<GLuint*>(*arg1_tarray);


  glSelectBuffer(arg0,arg1);

}

      
NAN_METHOD(shadeModel) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glShadeModel(arg0);

}

      
NAN_METHOD(stencilFunc) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gluint");
    return;
  }
  
  GLuint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glStencilFunc(arg0,arg1,arg2);

}

      
NAN_METHOD(stencilMask) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gluint");
    return;
  }
  
  GLuint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glStencilMask(arg0);

}

      
NAN_METHOD(stencilOp) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glenum");
    return;
  }
  
  GLenum arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glStencilOp(arg0,arg1,arg2);

}

      
NAN_METHOD(texCoord1d) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glTexCoord1d(arg0);

}

      
NAN_METHOD(texCoord1dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glTexCoord1dv(arg0);

}

      
NAN_METHOD(texCoord1f) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glTexCoord1f(arg0);

}

      
NAN_METHOD(texCoord1fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glTexCoord1fv(arg0);

}

      
NAN_METHOD(texCoord1i) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glTexCoord1i(arg0);

}

      
NAN_METHOD(texCoord1iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glTexCoord1iv(arg0);

}

      
NAN_METHOD(texCoord1s) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();


  glTexCoord1s(arg0);

}

      
NAN_METHOD(texCoord1sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glTexCoord1sv(arg0);

}

      
NAN_METHOD(texCoord2d) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glTexCoord2d(arg0,arg1);

}

      
NAN_METHOD(texCoord2dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glTexCoord2dv(arg0);

}

      
NAN_METHOD(texCoord2f) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glTexCoord2f(arg0,arg1);

}

      
NAN_METHOD(texCoord2fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glTexCoord2fv(arg0);

}

      
NAN_METHOD(texCoord2i) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glTexCoord2i(arg0,arg1);

}

      
NAN_METHOD(texCoord2iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glTexCoord2iv(arg0);

}

      
NAN_METHOD(texCoord2s) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glTexCoord2s(arg0,arg1);

}

      
NAN_METHOD(texCoord2sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glTexCoord2sv(arg0);

}

      
NAN_METHOD(texCoord3d) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexCoord3d(arg0,arg1,arg2);

}

      
NAN_METHOD(texCoord3dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glTexCoord3dv(arg0);

}

      
NAN_METHOD(texCoord3f) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexCoord3f(arg0,arg1,arg2);

}

      
NAN_METHOD(texCoord3fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glTexCoord3fv(arg0);

}

      
NAN_METHOD(texCoord3i) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexCoord3i(arg0,arg1,arg2);

}

      
NAN_METHOD(texCoord3iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glTexCoord3iv(arg0);

}

      
NAN_METHOD(texCoord3s) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexCoord3s(arg0,arg1,arg2);

}

      
NAN_METHOD(texCoord3sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glTexCoord3sv(arg0);

}

      
NAN_METHOD(texCoord4d) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glTexCoord4d(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(texCoord4dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glTexCoord4dv(arg0);

}

      
NAN_METHOD(texCoord4f) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glTexCoord4f(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(texCoord4fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glTexCoord4fv(arg0);

}

      
NAN_METHOD(texCoord4i) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glTexCoord4i(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(texCoord4iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glTexCoord4iv(arg0);

}

      
NAN_METHOD(texCoord4s) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glshort");
    return;
  }
  
  GLshort arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glTexCoord4s(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(texCoord4sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glTexCoord4sv(arg0);

}

      
NAN_METHOD(texCoordPointer) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 4, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg3_tarray(info[3]);
  GLvoid* arg3 = reinterpret_cast<GLvoid*>(*arg3_tarray);


  glTexCoordPointer(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(texEnvf) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexEnvf(arg0,arg1,arg2);

}

      
NAN_METHOD(texEnvfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glTexEnvfv(arg0,arg1,arg2);

}

      
NAN_METHOD(texEnvi) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexEnvi(arg0,arg1,arg2);

}

      
NAN_METHOD(texEnviv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glTexEnviv(arg0,arg1,arg2);

}

      
NAN_METHOD(texGend) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexGend(arg0,arg1,arg2);

}

      
NAN_METHOD(texGendv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg2_tarray(info[2]);
  GLdouble* arg2 = reinterpret_cast<GLdouble*>(*arg2_tarray);


  glTexGendv(arg0,arg1,arg2);

}

      
NAN_METHOD(texGenf) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexGenf(arg0,arg1,arg2);

}

      
NAN_METHOD(texGenfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glTexGenfv(arg0,arg1,arg2);

}

      
NAN_METHOD(texGeni) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexGeni(arg0,arg1,arg2);

}

      
NAN_METHOD(texGeniv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glTexGeniv(arg0,arg1,arg2);

}

      
NAN_METHOD(texImage1D) {
  if (info.Length() != 8) {
    Nan::ThrowError("Expected 8 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glsizei");
    return;
  }
  
  GLsizei arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glint");
    return;
  }
  
  GLint arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glenum");
    return;
  }
  
  GLenum arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a glenum");
    return;
  }
  
  GLenum arg6 = info[6]->Uint32Value(ctx).ToChecked();
  if (!info[7]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 8, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg7_tarray(info[7]);
  GLvoid* arg7 = reinterpret_cast<GLvoid*>(*arg7_tarray);


  glTexImage1D(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);

}

      
NAN_METHOD(texImage2D) {
  if (info.Length() != 9) {
    Nan::ThrowError("Expected 9 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glsizei");
    return;
  }
  
  GLsizei arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glsizei");
    return;
  }
  
  GLsizei arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glint");
    return;
  }
  
  GLint arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a glenum");
    return;
  }
  
  GLenum arg6 = info[6]->Uint32Value(ctx).ToChecked();
  if (!info[7]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 8, expected a glenum");
    return;
  }
  
  GLenum arg7 = info[7]->Uint32Value(ctx).ToChecked();
  if (!info[8]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 9, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg8_tarray(info[8]);
  GLvoid* arg8 = reinterpret_cast<GLvoid*>(*arg8_tarray);


  glTexImage2D(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);

}

      
NAN_METHOD(texParameterf) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexParameterf(arg0,arg1,arg2);

}

      
NAN_METHOD(texParameterfv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg2_tarray(info[2]);
  GLfloat* arg2 = reinterpret_cast<GLfloat*>(*arg2_tarray);


  glTexParameterfv(arg0,arg1,arg2);

}

      
NAN_METHOD(texParameteri) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTexParameteri(arg0,arg1,arg2);

}

      
NAN_METHOD(texParameteriv) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 3, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg2_tarray(info[2]);
  GLint* arg2 = reinterpret_cast<GLint*>(*arg2_tarray);


  glTexParameteriv(arg0,arg1,arg2);

}

      
NAN_METHOD(texSubImage1D) {
  if (info.Length() != 7) {
    Nan::ThrowError("Expected 7 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glsizei");
    return;
  }
  
  GLsizei arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glenum");
    return;
  }
  
  GLenum arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glenum");
    return;
  }
  
  GLenum arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 7, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg6_tarray(info[6]);
  GLvoid* arg6 = reinterpret_cast<GLvoid*>(*arg6_tarray);


  glTexSubImage1D(arg0,arg1,arg2,arg3,arg4,arg5,arg6);

}

      
NAN_METHOD(texSubImage2D) {
  if (info.Length() != 9) {
    Nan::ThrowError("Expected 9 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glenum");
    return;
  }
  
  GLenum arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();
  if (!info[4]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 5, expected a glsizei");
    return;
  }
  
  GLsizei arg4 = info[4]->Uint32Value(ctx).ToChecked();
  if (!info[5]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 6, expected a glsizei");
    return;
  }
  
  GLsizei arg5 = info[5]->Uint32Value(ctx).ToChecked();
  if (!info[6]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 7, expected a glenum");
    return;
  }
  
  GLenum arg6 = info[6]->Uint32Value(ctx).ToChecked();
  if (!info[7]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 8, expected a glenum");
    return;
  }
  
  GLenum arg7 = info[7]->Uint32Value(ctx).ToChecked();
  if (!info[8]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 9, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg8_tarray(info[8]);
  GLvoid* arg8 = reinterpret_cast<GLvoid*>(*arg8_tarray);


  glTexSubImage2D(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);

}

      
NAN_METHOD(translated) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTranslated(arg0,arg1,arg2);

}

      
NAN_METHOD(translatef) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glTranslatef(arg0,arg1,arg2);

}

      
NAN_METHOD(vertex2d) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glVertex2d(arg0,arg1);

}

      
NAN_METHOD(vertex2dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glVertex2dv(arg0);

}

      
NAN_METHOD(vertex2f) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glVertex2f(arg0,arg1);

}

      
NAN_METHOD(vertex2fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glVertex2fv(arg0);

}

      
NAN_METHOD(vertex2i) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glVertex2i(arg0,arg1);

}

      
NAN_METHOD(vertex2iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glVertex2iv(arg0);

}

      
NAN_METHOD(vertex2s) {
  if (info.Length() != 2) {
    Nan::ThrowError("Expected 2 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();


  glVertex2s(arg0,arg1);

}

      
NAN_METHOD(vertex2sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glVertex2sv(arg0);

}

      
NAN_METHOD(vertex3d) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glVertex3d(arg0,arg1,arg2);

}

      
NAN_METHOD(vertex3dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glVertex3dv(arg0);

}

      
NAN_METHOD(vertex3f) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glVertex3f(arg0,arg1,arg2);

}

      
NAN_METHOD(vertex3fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glVertex3fv(arg0);

}

      
NAN_METHOD(vertex3i) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glVertex3i(arg0,arg1,arg2);

}

      
NAN_METHOD(vertex3iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glVertex3iv(arg0);

}

      
NAN_METHOD(vertex3s) {
  if (info.Length() != 3) {
    Nan::ThrowError("Expected 3 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();


  glVertex3s(arg0,arg1,arg2);

}

      
NAN_METHOD(vertex3sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glVertex3sv(arg0);

}

      
NAN_METHOD(vertex4d) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a gldouble");
    return;
  }
  
  GLdouble arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a gldouble");
    return;
  }
  
  GLdouble arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a gldouble");
    return;
  }
  
  GLdouble arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a gldouble");
    return;
  }
  
  GLdouble arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glVertex4d(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(vertex4dv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<double> arg0_tarray(info[0]);
  GLdouble* arg0 = reinterpret_cast<GLdouble*>(*arg0_tarray);


  glVertex4dv(arg0);

}

      
NAN_METHOD(vertex4f) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glfloat");
    return;
  }
  
  GLfloat arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glfloat");
    return;
  }
  
  GLfloat arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glfloat");
    return;
  }
  
  GLfloat arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glfloat");
    return;
  }
  
  GLfloat arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glVertex4f(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(vertex4fv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<float> arg0_tarray(info[0]);
  GLfloat* arg0 = reinterpret_cast<GLfloat*>(*arg0_tarray);


  glVertex4fv(arg0);

}

      
NAN_METHOD(vertex4i) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glint");
    return;
  }
  
  GLint arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glint");
    return;
  }
  
  GLint arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glVertex4i(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(vertex4iv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<int> arg0_tarray(info[0]);
  GLint* arg0 = reinterpret_cast<GLint*>(*arg0_tarray);


  glVertex4iv(arg0);

}

      
NAN_METHOD(vertex4s) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glshort");
    return;
  }
  
  GLshort arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glshort");
    return;
  }
  
  GLshort arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glshort");
    return;
  }
  
  GLshort arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glshort");
    return;
  }
  
  GLshort arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glVertex4s(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(vertex4sv) {
  if (info.Length() != 1) {
    Nan::ThrowError("Expected 1 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 1, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<short> arg0_tarray(info[0]);
  GLshort* arg0 = reinterpret_cast<GLshort*>(*arg0_tarray);


  glVertex4sv(arg0);

}

      
NAN_METHOD(vertexPointer) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glenum");
    return;
  }
  
  GLenum arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsTypedArray()) {
    Nan::ThrowError("Invalid parameter 4, expected a typed array");
    return;
  }
  
  Nan::TypedArrayContents<char> arg3_tarray(info[3]);
  GLvoid* arg3 = reinterpret_cast<GLvoid*>(*arg3_tarray);


  glVertexPointer(arg0,arg1,arg2,arg3);

}

      
NAN_METHOD(viewport) {
  if (info.Length() != 4) {
    Nan::ThrowError("Expected 4 arguments");
    return;
  }
  
  auto ctx = Nan::GetCurrentContext();

  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 1, expected a glint");
    return;
  }
  
  GLint arg0 = info[0]->Uint32Value(ctx).ToChecked();
  if (!info[1]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 2, expected a glint");
    return;
  }
  
  GLint arg1 = info[1]->Uint32Value(ctx).ToChecked();
  if (!info[2]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 3, expected a glsizei");
    return;
  }
  
  GLsizei arg2 = info[2]->Uint32Value(ctx).ToChecked();
  if (!info[3]->IsNumber()) {
    Nan::ThrowError("Invalid parameter 4, expected a glsizei");
    return;
  }
  
  GLsizei arg3 = info[3]->Uint32Value(ctx).ToChecked();


  glViewport(arg0,arg1,arg2,arg3);

}


NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("accum").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(accum)).ToLocalChecked());
  Nan::Set(target, Nan::New("alphaFunc").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(alphaFunc)).ToLocalChecked());
  Nan::Set(target, Nan::New("areTexturesResident").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(areTexturesResident)).ToLocalChecked());
  Nan::Set(target, Nan::New("arrayElement").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(arrayElement)).ToLocalChecked());
  Nan::Set(target, Nan::New("begin").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(begin)).ToLocalChecked());
  Nan::Set(target, Nan::New("bindTexture").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(bindTexture)).ToLocalChecked());
  Nan::Set(target, Nan::New("bitmap").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(bitmap)).ToLocalChecked());
  Nan::Set(target, Nan::New("blendFunc").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(blendFunc)).ToLocalChecked());
  Nan::Set(target, Nan::New("callList").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(callList)).ToLocalChecked());
  Nan::Set(target, Nan::New("callLists").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(callLists)).ToLocalChecked());
  Nan::Set(target, Nan::New("clear").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(clear)).ToLocalChecked());
  Nan::Set(target, Nan::New("clearAccum").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(clearAccum)).ToLocalChecked());
  Nan::Set(target, Nan::New("clearColor").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(clearColor)).ToLocalChecked());
  Nan::Set(target, Nan::New("clearDepth").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(clearDepth)).ToLocalChecked());
  Nan::Set(target, Nan::New("clearIndex").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(clearIndex)).ToLocalChecked());
  Nan::Set(target, Nan::New("clearStencil").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(clearStencil)).ToLocalChecked());
  Nan::Set(target, Nan::New("clipPlane").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(clipPlane)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3b").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3b)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3bv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3bv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3d)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3f)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3i)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3s)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3ub").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3ub)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3ubv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3ubv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3ui").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3ui)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3uiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3uiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3us").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3us)).ToLocalChecked());
  Nan::Set(target, Nan::New("color3usv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color3usv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4b").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4b)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4bv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4bv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4d)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4f)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4i)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4s)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4ub").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4ub)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4ubv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4ubv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4ui").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4ui)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4uiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4uiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4us").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4us)).ToLocalChecked());
  Nan::Set(target, Nan::New("color4usv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(color4usv)).ToLocalChecked());
  Nan::Set(target, Nan::New("colorMask").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(colorMask)).ToLocalChecked());
  Nan::Set(target, Nan::New("colorMaterial").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(colorMaterial)).ToLocalChecked());
  Nan::Set(target, Nan::New("colorPointer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(colorPointer)).ToLocalChecked());
  Nan::Set(target, Nan::New("copyPixels").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(copyPixels)).ToLocalChecked());
  Nan::Set(target, Nan::New("copyTexImage1D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(copyTexImage1D)).ToLocalChecked());
  Nan::Set(target, Nan::New("copyTexImage2D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(copyTexImage2D)).ToLocalChecked());
  Nan::Set(target, Nan::New("copyTexSubImage1D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(copyTexSubImage1D)).ToLocalChecked());
  Nan::Set(target, Nan::New("copyTexSubImage2D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(copyTexSubImage2D)).ToLocalChecked());
  Nan::Set(target, Nan::New("cullFace").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(cullFace)).ToLocalChecked());
  Nan::Set(target, Nan::New("deleteLists").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(deleteLists)).ToLocalChecked());
  Nan::Set(target, Nan::New("deleteTextures").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(deleteTextures)).ToLocalChecked());
  Nan::Set(target, Nan::New("depthFunc").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(depthFunc)).ToLocalChecked());
  Nan::Set(target, Nan::New("depthMask").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(depthMask)).ToLocalChecked());
  Nan::Set(target, Nan::New("depthRange").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(depthRange)).ToLocalChecked());
  Nan::Set(target, Nan::New("disable").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(disable)).ToLocalChecked());
  Nan::Set(target, Nan::New("disableClientState").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(disableClientState)).ToLocalChecked());
  Nan::Set(target, Nan::New("drawArrays").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(drawArrays)).ToLocalChecked());
  Nan::Set(target, Nan::New("drawBuffer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(drawBuffer)).ToLocalChecked());
  Nan::Set(target, Nan::New("drawElements").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(drawElements)).ToLocalChecked());
  Nan::Set(target, Nan::New("drawPixels").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(drawPixels)).ToLocalChecked());
  Nan::Set(target, Nan::New("edgeFlag").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(edgeFlag)).ToLocalChecked());
  Nan::Set(target, Nan::New("edgeFlagPointer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(edgeFlagPointer)).ToLocalChecked());
  Nan::Set(target, Nan::New("edgeFlagv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(edgeFlagv)).ToLocalChecked());
  Nan::Set(target, Nan::New("enable").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(enable)).ToLocalChecked());
  Nan::Set(target, Nan::New("enableClientState").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(enableClientState)).ToLocalChecked());
  Nan::Set(target, Nan::New("end").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(end)).ToLocalChecked());
  Nan::Set(target, Nan::New("endList").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(endList)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord1d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord1d)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord1dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord1dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord1f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord1f)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord1fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord1fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord2d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord2d)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord2dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord2dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord2f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord2f)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalCoord2fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalCoord2fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalMesh1").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalMesh1)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalMesh2").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalMesh2)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalPoint1").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalPoint1)).ToLocalChecked());
  Nan::Set(target, Nan::New("evalPoint2").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(evalPoint2)).ToLocalChecked());
  Nan::Set(target, Nan::New("feedbackBuffer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(feedbackBuffer)).ToLocalChecked());
  Nan::Set(target, Nan::New("finish").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(finish)).ToLocalChecked());
  Nan::Set(target, Nan::New("flush").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(flush)).ToLocalChecked());
  Nan::Set(target, Nan::New("fogf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(fogf)).ToLocalChecked());
  Nan::Set(target, Nan::New("fogfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(fogfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("fogi").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(fogi)).ToLocalChecked());
  Nan::Set(target, Nan::New("fogiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(fogiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("frontFace").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(frontFace)).ToLocalChecked());
  Nan::Set(target, Nan::New("frustum").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(frustum)).ToLocalChecked());
  Nan::Set(target, Nan::New("genLists").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(genLists)).ToLocalChecked());
  Nan::Set(target, Nan::New("genTextures").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(genTextures)).ToLocalChecked());
  Nan::Set(target, Nan::New("getBooleanv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getBooleanv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getClipPlane").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getClipPlane)).ToLocalChecked());
  Nan::Set(target, Nan::New("getDoublev").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getDoublev)).ToLocalChecked());
  Nan::Set(target, Nan::New("getError").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getError)).ToLocalChecked());
  Nan::Set(target, Nan::New("getFloatv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getFloatv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getIntegerv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getIntegerv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getLightfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getLightfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getLightiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getLightiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getMapdv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getMapdv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getMapfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getMapfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getMapiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getMapiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getMaterialfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getMaterialfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getMaterialiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getMaterialiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getPixelMapfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getPixelMapfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getPixelMapuiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getPixelMapuiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getPixelMapusv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getPixelMapusv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getPointerv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getPointerv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getPolygonStipple").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getPolygonStipple)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexEnvfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexEnvfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexEnviv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexEnviv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexGendv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexGendv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexGenfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexGenfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexGeniv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexGeniv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexImage").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexImage)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexLevelParameterfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexLevelParameterfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexLevelParameteriv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexLevelParameteriv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexParameterfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexParameterfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("getTexParameteriv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(getTexParameteriv)).ToLocalChecked());
  Nan::Set(target, Nan::New("hint").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(hint)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexMask").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexMask)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexPointer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexPointer)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexd").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexd)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexdv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexdv)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexf)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexi").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexi)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexs").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexs)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexsv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexsv)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexub").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexub)).ToLocalChecked());
  Nan::Set(target, Nan::New("indexubv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(indexubv)).ToLocalChecked());
  Nan::Set(target, Nan::New("initNames").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(initNames)).ToLocalChecked());
  Nan::Set(target, Nan::New("interleavedArrays").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(interleavedArrays)).ToLocalChecked());
  Nan::Set(target, Nan::New("isEnabled").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(isEnabled)).ToLocalChecked());
  Nan::Set(target, Nan::New("isList").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(isList)).ToLocalChecked());
  Nan::Set(target, Nan::New("isTexture").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(isTexture)).ToLocalChecked());
  Nan::Set(target, Nan::New("lightModelf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lightModelf)).ToLocalChecked());
  Nan::Set(target, Nan::New("lightModelfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lightModelfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("lightModeli").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lightModeli)).ToLocalChecked());
  Nan::Set(target, Nan::New("lightModeliv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lightModeliv)).ToLocalChecked());
  Nan::Set(target, Nan::New("lightf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lightf)).ToLocalChecked());
  Nan::Set(target, Nan::New("lightfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lightfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("lighti").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lighti)).ToLocalChecked());
  Nan::Set(target, Nan::New("lightiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lightiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("lineStipple").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lineStipple)).ToLocalChecked());
  Nan::Set(target, Nan::New("lineWidth").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lineWidth)).ToLocalChecked());
  Nan::Set(target, Nan::New("listBase").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(listBase)).ToLocalChecked());
  Nan::Set(target, Nan::New("loadIdentity").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(loadIdentity)).ToLocalChecked());
  Nan::Set(target, Nan::New("loadMatrixd").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(loadMatrixd)).ToLocalChecked());
  Nan::Set(target, Nan::New("loadMatrixf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(loadMatrixf)).ToLocalChecked());
  Nan::Set(target, Nan::New("loadName").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(loadName)).ToLocalChecked());
  Nan::Set(target, Nan::New("logicOp").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(logicOp)).ToLocalChecked());
  Nan::Set(target, Nan::New("map1d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(map1d)).ToLocalChecked());
  Nan::Set(target, Nan::New("map1f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(map1f)).ToLocalChecked());
  Nan::Set(target, Nan::New("map2d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(map2d)).ToLocalChecked());
  Nan::Set(target, Nan::New("map2f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(map2f)).ToLocalChecked());
  Nan::Set(target, Nan::New("mapGrid1d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(mapGrid1d)).ToLocalChecked());
  Nan::Set(target, Nan::New("mapGrid1f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(mapGrid1f)).ToLocalChecked());
  Nan::Set(target, Nan::New("mapGrid2d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(mapGrid2d)).ToLocalChecked());
  Nan::Set(target, Nan::New("mapGrid2f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(mapGrid2f)).ToLocalChecked());
  Nan::Set(target, Nan::New("materialf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(materialf)).ToLocalChecked());
  Nan::Set(target, Nan::New("materialfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(materialfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("materiali").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(materiali)).ToLocalChecked());
  Nan::Set(target, Nan::New("materialiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(materialiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("matrixMode").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(matrixMode)).ToLocalChecked());
  Nan::Set(target, Nan::New("multMatrixd").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(multMatrixd)).ToLocalChecked());
  Nan::Set(target, Nan::New("multMatrixf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(multMatrixf)).ToLocalChecked());
  Nan::Set(target, Nan::New("newList").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(newList)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3b").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3b)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3bv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3bv)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3d)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3f)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3i)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3s)).ToLocalChecked());
  Nan::Set(target, Nan::New("normal3sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normal3sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("normalPointer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(normalPointer)).ToLocalChecked());
  Nan::Set(target, Nan::New("ortho").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(ortho)).ToLocalChecked());
  Nan::Set(target, Nan::New("passThrough").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(passThrough)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelMapfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelMapfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelMapuiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelMapuiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelMapusv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelMapusv)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelStoref").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelStoref)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelStorei").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelStorei)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelTransferf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelTransferf)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelTransferi").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelTransferi)).ToLocalChecked());
  Nan::Set(target, Nan::New("pixelZoom").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pixelZoom)).ToLocalChecked());
  Nan::Set(target, Nan::New("pointSize").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pointSize)).ToLocalChecked());
  Nan::Set(target, Nan::New("polygonMode").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(polygonMode)).ToLocalChecked());
  Nan::Set(target, Nan::New("polygonOffset").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(polygonOffset)).ToLocalChecked());
  Nan::Set(target, Nan::New("polygonStipple").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(polygonStipple)).ToLocalChecked());
  Nan::Set(target, Nan::New("popAttrib").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(popAttrib)).ToLocalChecked());
  Nan::Set(target, Nan::New("popClientAttrib").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(popClientAttrib)).ToLocalChecked());
  Nan::Set(target, Nan::New("popMatrix").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(popMatrix)).ToLocalChecked());
  Nan::Set(target, Nan::New("popName").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(popName)).ToLocalChecked());
  Nan::Set(target, Nan::New("prioritizeTextures").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(prioritizeTextures)).ToLocalChecked());
  Nan::Set(target, Nan::New("pushAttrib").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pushAttrib)).ToLocalChecked());
  Nan::Set(target, Nan::New("pushClientAttrib").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pushClientAttrib)).ToLocalChecked());
  Nan::Set(target, Nan::New("pushMatrix").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pushMatrix)).ToLocalChecked());
  Nan::Set(target, Nan::New("pushName").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(pushName)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2d)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2f)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2i)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2s)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos2sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos2sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3d)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3f)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3i)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3s)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos3sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos3sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4d)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4f)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4i)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4s)).ToLocalChecked());
  Nan::Set(target, Nan::New("rasterPos4sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rasterPos4sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("readBuffer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(readBuffer)).ToLocalChecked());
  Nan::Set(target, Nan::New("readPixels").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(readPixels)).ToLocalChecked());
  Nan::Set(target, Nan::New("rectd").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rectd)).ToLocalChecked());
  Nan::Set(target, Nan::New("rectdv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rectdv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rectf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rectf)).ToLocalChecked());
  Nan::Set(target, Nan::New("rectfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rectfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("recti").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(recti)).ToLocalChecked());
  Nan::Set(target, Nan::New("rectiv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rectiv)).ToLocalChecked());
  Nan::Set(target, Nan::New("rects").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rects)).ToLocalChecked());
  Nan::Set(target, Nan::New("rectsv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rectsv)).ToLocalChecked());
  Nan::Set(target, Nan::New("renderMode").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(renderMode)).ToLocalChecked());
  Nan::Set(target, Nan::New("rotated").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rotated)).ToLocalChecked());
  Nan::Set(target, Nan::New("rotatef").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(rotatef)).ToLocalChecked());
  Nan::Set(target, Nan::New("scaled").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(scaled)).ToLocalChecked());
  Nan::Set(target, Nan::New("scalef").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(scalef)).ToLocalChecked());
  Nan::Set(target, Nan::New("scissor").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(scissor)).ToLocalChecked());
  Nan::Set(target, Nan::New("selectBuffer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(selectBuffer)).ToLocalChecked());
  Nan::Set(target, Nan::New("shadeModel").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(shadeModel)).ToLocalChecked());
  Nan::Set(target, Nan::New("stencilFunc").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(stencilFunc)).ToLocalChecked());
  Nan::Set(target, Nan::New("stencilMask").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(stencilMask)).ToLocalChecked());
  Nan::Set(target, Nan::New("stencilOp").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(stencilOp)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1d)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1f)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1i)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1s)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord1sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord1sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2d)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2f)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2i)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2s)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord2sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord2sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3d)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3f)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3i)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3s)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord3sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord3sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4d)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4f)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4i)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4s)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoord4sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoord4sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texCoordPointer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texCoordPointer)).ToLocalChecked());
  Nan::Set(target, Nan::New("texEnvf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texEnvf)).ToLocalChecked());
  Nan::Set(target, Nan::New("texEnvfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texEnvfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texEnvi").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texEnvi)).ToLocalChecked());
  Nan::Set(target, Nan::New("texEnviv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texEnviv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texGend").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texGend)).ToLocalChecked());
  Nan::Set(target, Nan::New("texGendv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texGendv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texGenf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texGenf)).ToLocalChecked());
  Nan::Set(target, Nan::New("texGenfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texGenfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texGeni").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texGeni)).ToLocalChecked());
  Nan::Set(target, Nan::New("texGeniv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texGeniv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texImage1D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texImage1D)).ToLocalChecked());
  Nan::Set(target, Nan::New("texImage2D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texImage2D)).ToLocalChecked());
  Nan::Set(target, Nan::New("texParameterf").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texParameterf)).ToLocalChecked());
  Nan::Set(target, Nan::New("texParameterfv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texParameterfv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texParameteri").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texParameteri)).ToLocalChecked());
  Nan::Set(target, Nan::New("texParameteriv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texParameteriv)).ToLocalChecked());
  Nan::Set(target, Nan::New("texSubImage1D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texSubImage1D)).ToLocalChecked());
  Nan::Set(target, Nan::New("texSubImage2D").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(texSubImage2D)).ToLocalChecked());
  Nan::Set(target, Nan::New("translated").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(translated)).ToLocalChecked());
  Nan::Set(target, Nan::New("translatef").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(translatef)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2d)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2f)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2i)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2s)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex2sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex2sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3d)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3f)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3i)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3s)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex3sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex3sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4d").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4d)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4dv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4dv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4f").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4f)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4fv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4fv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4i").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4i)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4iv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4iv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4s").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4s)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertex4sv").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertex4sv)).ToLocalChecked());
  Nan::Set(target, Nan::New("vertexPointer").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(vertexPointer)).ToLocalChecked());
  Nan::Set(target, Nan::New("viewport").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(viewport)).ToLocalChecked());

}

NODE_MODULE(gljs, InitAll)
