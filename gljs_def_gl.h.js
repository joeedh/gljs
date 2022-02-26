/* WARNING: auto-generated code! */
import {API} from './gljs.js';

  export const api = new API([
  "void glAccum(GLenum op,GLfloat value)",
  "void glAlphaFunc(GLenum func,GLclampf ref)",
  "GLboolean glAreTexturesResident(GLsizei n,const GLuint* textures,GLboolean* residences)",
  "void glArrayElement(GLint i)",
  "void glBegin(GLenum mode)",
  "void glBindTexture(GLenum target,GLuint texture)",
  "void glBitmap(GLsizei width,GLsizei height,GLfloat xorig,GLfloat yorig,GLfloat xmove,GLfloat ymove,const GLubyte* bitmap)",
  "void glBlendFunc(GLenum sfactor,GLenum dfactor)",
  "void glCallList(GLuint list)",
  "void glCallLists(GLsizei n,GLenum type,const GLvoid* lists)",
  "void glClear(GLbitfield mask)",
  "void glClearAccum(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)",
  "void glClearColor(GLclampf red,GLclampf green,GLclampf blue,GLclampf alpha)",
  "void glClearDepth(GLclampd depth)",
  "void glClearIndex(GLfloat c)",
  "void glClearStencil(GLint s)",
  "void glClipPlane(GLenum plane,const GLdouble* equation)",
  "void glColor3b(GLbyte red,GLbyte green,GLbyte blue)",
  "void glColor3bv(const GLbyte* v)",
  "void glColor3d(GLdouble red,GLdouble green,GLdouble blue)",
  "void glColor3dv(const GLdouble* v)",
  "void glColor3f(GLfloat red,GLfloat green,GLfloat blue)",
  "void glColor3fv(const GLfloat* v)",
  "void glColor3i(GLint red,GLint green,GLint blue)",
  "void glColor3iv(const GLint* v)",
  "void glColor3s(GLshort red,GLshort green,GLshort blue)",
  "void glColor3sv(const GLshort* v)",
  "void glColor3ub(GLubyte red,GLubyte green,GLubyte blue)",
  "void glColor3ubv(const GLubyte* v)",
  "void glColor3ui(GLuint red,GLuint green,GLuint blue)",
  "void glColor3uiv(const GLuint* v)",
  "void glColor3us(GLushort red,GLushort green,GLushort blue)",
  "void glColor3usv(const GLushort* v)",
  "void glColor4b(GLbyte red,GLbyte green,GLbyte blue,GLbyte alpha)",
  "void glColor4bv(const GLbyte* v)",
  "void glColor4d(GLdouble red,GLdouble green,GLdouble blue,GLdouble alpha)",
  "void glColor4dv(const GLdouble* v)",
  "void glColor4f(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)",
  "void glColor4fv(const GLfloat* v)",
  "void glColor4i(GLint red,GLint green,GLint blue,GLint alpha)",
  "void glColor4iv(const GLint* v)",
  "void glColor4s(GLshort red,GLshort green,GLshort blue,GLshort alpha)",
  "void glColor4sv(const GLshort* v)",
  "void glColor4ub(GLubyte red,GLubyte green,GLubyte blue,GLubyte alpha)",
  "void glColor4ubv(const GLubyte* v)",
  "void glColor4ui(GLuint red,GLuint green,GLuint blue,GLuint alpha)",
  "void glColor4uiv(const GLuint* v)",
  "void glColor4us(GLushort red,GLushort green,GLushort blue,GLushort alpha)",
  "void glColor4usv(const GLushort* v)",
  "void glColorMask(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha)",
  "void glColorMaterial(GLenum face,GLenum mode)",
  "void glColorPointer(GLint size,GLenum type,GLsizei stride,const GLvoid* pointer)",
  "void glCopyPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum type)",
  "void glCopyTexImage1D(GLenum target,GLint level,GLenum internalFormat,GLint x,GLint y,GLsizei width,GLint border)",
  "void glCopyTexImage2D(GLenum target,GLint level,GLenum internalFormat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)",
  "void glCopyTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width)",
  "void glCopyTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height)",
  "void glCullFace(GLenum mode)",
  "void glDeleteLists(GLuint list,GLsizei range)",
  "void glDeleteTextures(GLsizei n,const GLuint* textures)",
  "void glDepthFunc(GLenum func)",
  "void glDepthMask(GLboolean flag)",
  "void glDepthRange(GLclampd zNear,GLclampd zFar)",
  "void glDisable(GLenum cap)",
  "void glDisableClientState(GLenum array)",
  "void glDrawArrays(GLenum mode,GLint first,GLsizei count)",
  "void glDrawBuffer(GLenum mode)",
  "void glDrawElements(GLenum mode,GLsizei count,GLenum type,const GLvoid* indices)",
  "void glDrawPixels(GLsizei width,GLsizei height,GLenum format,GLenum type,const GLvoid* pixels)",
  "void glEdgeFlag(GLboolean flag)",
  "void glEdgeFlagPointer(GLsizei stride,const GLvoid* pointer)",
  "void glEdgeFlagv(const GLboolean* flag)",
  "void glEnable(GLenum cap)",
  "void glEnableClientState(GLenum array)",
  "void glEnd()",
  "void glEndList()",
  "void glEvalCoord1d(GLdouble u)",
  "void glEvalCoord1dv(const GLdouble* u)",
  "void glEvalCoord1f(GLfloat u)",
  "void glEvalCoord1fv(const GLfloat* u)",
  "void glEvalCoord2d(GLdouble u,GLdouble v)",
  "void glEvalCoord2dv(const GLdouble* u)",
  "void glEvalCoord2f(GLfloat u,GLfloat v)",
  "void glEvalCoord2fv(const GLfloat* u)",
  "void glEvalMesh1(GLenum mode,GLint i1,GLint i2)",
  "void glEvalMesh2(GLenum mode,GLint i1,GLint i2,GLint j1,GLint j2)",
  "void glEvalPoint1(GLint i)",
  "void glEvalPoint2(GLint i,GLint j)",
  "void glFeedbackBuffer(GLsizei size,GLenum type,GLfloat* buffer)",
  "void glFinish()",
  "void glFlush()",
  "void glFogf(GLenum pname,GLfloat param)",
  "void glFogfv(GLenum pname,const GLfloat* params)",
  "void glFogi(GLenum pname,GLint param)",
  "void glFogiv(GLenum pname,const GLint* params)",
  "void glFrontFace(GLenum mode)",
  "void glFrustum(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar)",
  "GLuint glGenLists(GLsizei range)",
  "void glGenTextures(GLsizei n,GLuint* textures)",
  "void glGetBooleanv(GLenum pname,GLboolean* params)",
  "void glGetClipPlane(GLenum plane,GLdouble* equation)",
  "void glGetDoublev(GLenum pname,GLdouble* params)",
  "GLenum glGetError()",
  "void glGetFloatv(GLenum pname,GLfloat* params)",
  "void glGetIntegerv(GLenum pname,GLint* params)",
  "void glGetLightfv(GLenum light,GLenum pname,GLfloat* params)",
  "void glGetLightiv(GLenum light,GLenum pname,GLint* params)",
  "void glGetMapdv(GLenum target,GLenum query,GLdouble* v)",
  "void glGetMapfv(GLenum target,GLenum query,GLfloat* v)",
  "void glGetMapiv(GLenum target,GLenum query,GLint* v)",
  "void glGetMaterialfv(GLenum face,GLenum pname,GLfloat* params)",
  "void glGetMaterialiv(GLenum face,GLenum pname,GLint* params)",
  "void glGetPixelMapfv(GLenum map,GLfloat* values)",
  "void glGetPixelMapuiv(GLenum map,GLuint* values)",
  "void glGetPixelMapusv(GLenum map,GLushort* values)",
  "void glGetPointerv(GLenum pname,GLvoid** params)",
  "void glGetPolygonStipple(GLubyte* mask)",
  "const GLubyte* glGetString(GLenum name)",
  "void glGetTexEnvfv(GLenum target,GLenum pname,GLfloat* params)",
  "void glGetTexEnviv(GLenum target,GLenum pname,GLint* params)",
  "void glGetTexGendv(GLenum coord,GLenum pname,GLdouble* params)",
  "void glGetTexGenfv(GLenum coord,GLenum pname,GLfloat* params)",
  "void glGetTexGeniv(GLenum coord,GLenum pname,GLint* params)",
  "void glGetTexImage(GLenum target,GLint level,GLenum format,GLenum type,GLvoid* pixels)",
  "void glGetTexLevelParameterfv(GLenum target,GLint level,GLenum pname,GLfloat* params)",
  "void glGetTexLevelParameteriv(GLenum target,GLint level,GLenum pname,GLint* params)",
  "void glGetTexParameterfv(GLenum target,GLenum pname,GLfloat* params)",
  "void glGetTexParameteriv(GLenum target,GLenum pname,GLint* params)",
  "void glHint(GLenum target,GLenum mode)",
  "void glIndexMask(GLuint mask)",
  "void glIndexPointer(GLenum type,GLsizei stride,const GLvoid* pointer)",
  "void glIndexd(GLdouble c)",
  "void glIndexdv(const GLdouble* c)",
  "void glIndexf(GLfloat c)",
  "void glIndexfv(const GLfloat* c)",
  "void glIndexi(GLint c)",
  "void glIndexiv(const GLint* c)",
  "void glIndexs(GLshort c)",
  "void glIndexsv(const GLshort* c)",
  "void glIndexub(GLubyte c)",
  "void glIndexubv(const GLubyte* c)",
  "void glInitNames()",
  "void glInterleavedArrays(GLenum format,GLsizei stride,const GLvoid* pointer)",
  "GLboolean glIsEnabled(GLenum cap)",
  "GLboolean glIsList(GLuint list)",
  "GLboolean glIsTexture(GLuint texture)",
  "void glLightModelf(GLenum pname,GLfloat param)",
  "void glLightModelfv(GLenum pname,const GLfloat* params)",
  "void glLightModeli(GLenum pname,GLint param)",
  "void glLightModeliv(GLenum pname,const GLint* params)",
  "void glLightf(GLenum light,GLenum pname,GLfloat param)",
  "void glLightfv(GLenum light,GLenum pname,const GLfloat* params)",
  "void glLighti(GLenum light,GLenum pname,GLint param)",
  "void glLightiv(GLenum light,GLenum pname,const GLint* params)",
  "void glLineStipple(GLint factor,GLushort pattern)",
  "void glLineWidth(GLfloat width)",
  "void glListBase(GLuint base)",
  "void glLoadIdentity()",
  "void glLoadMatrixd(const GLdouble* m)",
  "void glLoadMatrixf(const GLfloat* m)",
  "void glLoadName(GLuint name)",
  "void glLogicOp(GLenum opcode)",
  "void glMap1d(GLenum target,GLdouble u1,GLdouble u2,GLint stride,GLint order,const GLdouble* points)",
  "void glMap1f(GLenum target,GLfloat u1,GLfloat u2,GLint stride,GLint order,const GLfloat* points)",
  "void glMap2d(GLenum target,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,const GLdouble* points)",
  "void glMap2f(GLenum target,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,const GLfloat* points)",
  "void glMapGrid1d(GLint un,GLdouble u1,GLdouble u2)",
  "void glMapGrid1f(GLint un,GLfloat u1,GLfloat u2)",
  "void glMapGrid2d(GLint un,GLdouble u1,GLdouble u2,GLint vn,GLdouble v1,GLdouble v2)",
  "void glMapGrid2f(GLint un,GLfloat u1,GLfloat u2,GLint vn,GLfloat v1,GLfloat v2)",
  "void glMaterialf(GLenum face,GLenum pname,GLfloat param)",
  "void glMaterialfv(GLenum face,GLenum pname,const GLfloat* params)",
  "void glMateriali(GLenum face,GLenum pname,GLint param)",
  "void glMaterialiv(GLenum face,GLenum pname,const GLint* params)",
  "void glMatrixMode(GLenum mode)",
  "void glMultMatrixd(const GLdouble* m)",
  "void glMultMatrixf(const GLfloat* m)",
  "void glNewList(GLuint list,GLenum mode)",
  "void glNormal3b(GLbyte nx,GLbyte ny,GLbyte nz)",
  "void glNormal3bv(const GLbyte* v)",
  "void glNormal3d(GLdouble nx,GLdouble ny,GLdouble nz)",
  "void glNormal3dv(const GLdouble* v)",
  "void glNormal3f(GLfloat nx,GLfloat ny,GLfloat nz)",
  "void glNormal3fv(const GLfloat* v)",
  "void glNormal3i(GLint nx,GLint ny,GLint nz)",
  "void glNormal3iv(const GLint* v)",
  "void glNormal3s(GLshort nx,GLshort ny,GLshort nz)",
  "void glNormal3sv(const GLshort* v)",
  "void glNormalPointer(GLenum type,GLsizei stride,const GLvoid* pointer)",
  "void glOrtho(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar)",
  "void glPassThrough(GLfloat token)",
  "void glPixelMapfv(GLenum map,GLsizei mapsize,const GLfloat* values)",
  "void glPixelMapuiv(GLenum map,GLsizei mapsize,const GLuint* values)",
  "void glPixelMapusv(GLenum map,GLsizei mapsize,const GLushort* values)",
  "void glPixelStoref(GLenum pname,GLfloat param)",
  "void glPixelStorei(GLenum pname,GLint param)",
  "void glPixelTransferf(GLenum pname,GLfloat param)",
  "void glPixelTransferi(GLenum pname,GLint param)",
  "void glPixelZoom(GLfloat xfactor,GLfloat yfactor)",
  "void glPointSize(GLfloat size)",
  "void glPolygonMode(GLenum face,GLenum mode)",
  "void glPolygonOffset(GLfloat factor,GLfloat units)",
  "void glPolygonStipple(const GLubyte* mask)",
  "void glPopAttrib()",
  "void glPopClientAttrib()",
  "void glPopMatrix()",
  "void glPopName()",
  "void glPrioritizeTextures(GLsizei n,const GLuint* textures,const GLclampf* priorities)",
  "void glPushAttrib(GLbitfield mask)",
  "void glPushClientAttrib(GLbitfield mask)",
  "void glPushMatrix()",
  "void glPushName(GLuint name)",
  "void glRasterPos2d(GLdouble x,GLdouble y)",
  "void glRasterPos2dv(const GLdouble* v)",
  "void glRasterPos2f(GLfloat x,GLfloat y)",
  "void glRasterPos2fv(const GLfloat* v)",
  "void glRasterPos2i(GLint x,GLint y)",
  "void glRasterPos2iv(const GLint* v)",
  "void glRasterPos2s(GLshort x,GLshort y)",
  "void glRasterPos2sv(const GLshort* v)",
  "void glRasterPos3d(GLdouble x,GLdouble y,GLdouble z)",
  "void glRasterPos3dv(const GLdouble* v)",
  "void glRasterPos3f(GLfloat x,GLfloat y,GLfloat z)",
  "void glRasterPos3fv(const GLfloat* v)",
  "void glRasterPos3i(GLint x,GLint y,GLint z)",
  "void glRasterPos3iv(const GLint* v)",
  "void glRasterPos3s(GLshort x,GLshort y,GLshort z)",
  "void glRasterPos3sv(const GLshort* v)",
  "void glRasterPos4d(GLdouble x,GLdouble y,GLdouble z,GLdouble w)",
  "void glRasterPos4dv(const GLdouble* v)",
  "void glRasterPos4f(GLfloat x,GLfloat y,GLfloat z,GLfloat w)",
  "void glRasterPos4fv(const GLfloat* v)",
  "void glRasterPos4i(GLint x,GLint y,GLint z,GLint w)",
  "void glRasterPos4iv(const GLint* v)",
  "void glRasterPos4s(GLshort x,GLshort y,GLshort z,GLshort w)",
  "void glRasterPos4sv(const GLshort* v)",
  "void glReadBuffer(GLenum mode)",
  "void glReadPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLvoid* pixels)",
  "void glRectd(GLdouble x1,GLdouble y1,GLdouble x2,GLdouble y2)",
  "void glRectdv(const GLdouble* v1,const GLdouble* v2)",
  "void glRectf(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2)",
  "void glRectfv(const GLfloat* v1,const GLfloat* v2)",
  "void glRecti(GLint x1,GLint y1,GLint x2,GLint y2)",
  "void glRectiv(const GLint* v1,const GLint* v2)",
  "void glRects(GLshort x1,GLshort y1,GLshort x2,GLshort y2)",
  "void glRectsv(const GLshort* v1,const GLshort* v2)",
  "GLint glRenderMode(GLenum mode)",
  "void glRotated(GLdouble angle,GLdouble x,GLdouble y,GLdouble z)",
  "void glRotatef(GLfloat angle,GLfloat x,GLfloat y,GLfloat z)",
  "void glScaled(GLdouble x,GLdouble y,GLdouble z)",
  "void glScalef(GLfloat x,GLfloat y,GLfloat z)",
  "void glScissor(GLint x,GLint y,GLsizei width,GLsizei height)",
  "void glSelectBuffer(GLsizei size,GLuint* buffer)",
  "void glShadeModel(GLenum mode)",
  "void glStencilFunc(GLenum func,GLint ref,GLuint mask)",
  "void glStencilMask(GLuint mask)",
  "void glStencilOp(GLenum fail,GLenum zfail,GLenum zpass)",
  "void glTexCoord1d(GLdouble s)",
  "void glTexCoord1dv(const GLdouble* v)",
  "void glTexCoord1f(GLfloat s)",
  "void glTexCoord1fv(const GLfloat* v)",
  "void glTexCoord1i(GLint s)",
  "void glTexCoord1iv(const GLint* v)",
  "void glTexCoord1s(GLshort s)",
  "void glTexCoord1sv(const GLshort* v)",
  "void glTexCoord2d(GLdouble s,GLdouble t)",
  "void glTexCoord2dv(const GLdouble* v)",
  "void glTexCoord2f(GLfloat s,GLfloat t)",
  "void glTexCoord2fv(const GLfloat* v)",
  "void glTexCoord2i(GLint s,GLint t)",
  "void glTexCoord2iv(const GLint* v)",
  "void glTexCoord2s(GLshort s,GLshort t)",
  "void glTexCoord2sv(const GLshort* v)",
  "void glTexCoord3d(GLdouble s,GLdouble t,GLdouble r)",
  "void glTexCoord3dv(const GLdouble* v)",
  "void glTexCoord3f(GLfloat s,GLfloat t,GLfloat r)",
  "void glTexCoord3fv(const GLfloat* v)",
  "void glTexCoord3i(GLint s,GLint t,GLint r)",
  "void glTexCoord3iv(const GLint* v)",
  "void glTexCoord3s(GLshort s,GLshort t,GLshort r)",
  "void glTexCoord3sv(const GLshort* v)",
  "void glTexCoord4d(GLdouble s,GLdouble t,GLdouble r,GLdouble q)",
  "void glTexCoord4dv(const GLdouble* v)",
  "void glTexCoord4f(GLfloat s,GLfloat t,GLfloat r,GLfloat q)",
  "void glTexCoord4fv(const GLfloat* v)",
  "void glTexCoord4i(GLint s,GLint t,GLint r,GLint q)",
  "void glTexCoord4iv(const GLint* v)",
  "void glTexCoord4s(GLshort s,GLshort t,GLshort r,GLshort q)",
  "void glTexCoord4sv(const GLshort* v)",
  "void glTexCoordPointer(GLint size,GLenum type,GLsizei stride,const GLvoid* pointer)",
  "void glTexEnvf(GLenum target,GLenum pname,GLfloat param)",
  "void glTexEnvfv(GLenum target,GLenum pname,const GLfloat* params)",
  "void glTexEnvi(GLenum target,GLenum pname,GLint param)",
  "void glTexEnviv(GLenum target,GLenum pname,const GLint* params)",
  "void glTexGend(GLenum coord,GLenum pname,GLdouble param)",
  "void glTexGendv(GLenum coord,GLenum pname,const GLdouble* params)",
  "void glTexGenf(GLenum coord,GLenum pname,GLfloat param)",
  "void glTexGenfv(GLenum coord,GLenum pname,const GLfloat* params)",
  "void glTexGeni(GLenum coord,GLenum pname,GLint param)",
  "void glTexGeniv(GLenum coord,GLenum pname,const GLint* params)",
  "void glTexImage1D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const GLvoid* pixels)",
  "void glTexImage2D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const GLvoid* pixels)",
  "void glTexParameterf(GLenum target,GLenum pname,GLfloat param)",
  "void glTexParameterfv(GLenum target,GLenum pname,const GLfloat* params)",
  "void glTexParameteri(GLenum target,GLenum pname,GLint param)",
  "void glTexParameteriv(GLenum target,GLenum pname,const GLint* params)",
  "void glTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const GLvoid* pixels)",
  "void glTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const GLvoid* pixels)",
  "void glTranslated(GLdouble x,GLdouble y,GLdouble z)",
  "void glTranslatef(GLfloat x,GLfloat y,GLfloat z)",
  "void glVertex2d(GLdouble x,GLdouble y)",
  "void glVertex2dv(const GLdouble* v)",
  "void glVertex2f(GLfloat x,GLfloat y)",
  "void glVertex2fv(const GLfloat* v)",
  "void glVertex2i(GLint x,GLint y)",
  "void glVertex2iv(const GLint* v)",
  "void glVertex2s(GLshort x,GLshort y)",
  "void glVertex2sv(const GLshort* v)",
  "void glVertex3d(GLdouble x,GLdouble y,GLdouble z)",
  "void glVertex3dv(const GLdouble* v)",
  "void glVertex3f(GLfloat x,GLfloat y,GLfloat z)",
  "void glVertex3fv(const GLfloat* v)",
  "void glVertex3i(GLint x,GLint y,GLint z)",
  "void glVertex3iv(const GLint* v)",
  "void glVertex3s(GLshort x,GLshort y,GLshort z)",
  "void glVertex3sv(const GLshort* v)",
  "void glVertex4d(GLdouble x,GLdouble y,GLdouble z,GLdouble w)",
  "void glVertex4dv(const GLdouble* v)",
  "void glVertex4f(GLfloat x,GLfloat y,GLfloat z,GLfloat w)",
  "void glVertex4fv(const GLfloat* v)",
  "void glVertex4i(GLint x,GLint y,GLint z,GLint w)",
  "void glVertex4iv(const GLint* v)",
  "void glVertex4s(GLshort x,GLshort y,GLshort z,GLshort w)",
  "void glVertex4sv(const GLshort* v)",
  "void glVertexPointer(GLint size,GLenum type,GLsizei stride,const GLvoid* pointer)",
  "void glViewport(GLint x,GLint y,GLsizei width,GLsizei height)",
  "typedef void(* PFNGLCOLORTABLEEXTPROC)",
  "typedef void(* PFNGLCOLORSUBTABLEEXTPROC)",
  "typedef void(* PFNGLGETCOLORTABLEEXTPROC)",
  " (GLenum target,GLenum format,GLenum type,GLvoid* data)",
  "typedef void(* PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)",
  " (GLenum target,GLenum pname,GLint* params)",
  "typedef void(* PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)",
  " (GLenum target,GLenum pname,GLfloat* params)",
]);
api.addGlew([
]);
;
api.addEnums({
  "VERSION_1_1": 1,
  "ACCUM": 256,
  "LOAD": 257,
  "RETURN": 258,
  "MULT": 259,
  "ADD": 260,
  "NEVER": 512,
  "LESS": 513,
  "EQUAL": 514,
  "LEQUAL": 515,
  "GREATER": 516,
  "NOTEQUAL": 517,
  "GEQUAL": 518,
  "ALWAYS": 519,
  "CURRENT_BIT": 1,
  "POINT_BIT": 2,
  "LINE_BIT": 4,
  "POLYGON_BIT": 8,
  "POLYGON_STIPPLE_BIT": 16,
  "PIXEL_MODE_BIT": 32,
  "LIGHTING_BIT": 64,
  "FOG_BIT": 128,
  "DEPTH_BUFFER_BIT": 256,
  "ACCUM_BUFFER_BIT": 512,
  "STENCIL_BUFFER_BIT": 1024,
  "VIEWPORT_BIT": 2048,
  "TRANSFORM_BIT": 4096,
  "ENABLE_BIT": 8192,
  "COLOR_BUFFER_BIT": 16384,
  "HINT_BIT": 32768,
  "EVAL_BIT": 65536,
  "LIST_BIT": 131072,
  "TEXTURE_BIT": 262144,
  "SCISSOR_BIT": 524288,
  "ALL_ATTRIB_BITS": 1048575,
  "POINTS": "0x0000",
  "LINES": 1,
  "LINE_LOOP": 2,
  "LINE_STRIP": 3,
  "TRIANGLES": 4,
  "TRIANGLE_STRIP": 5,
  "TRIANGLE_FAN": 6,
  "QUADS": 7,
  "QUAD_STRIP": 8,
  "POLYGON": 9,
  "ZERO": "0",
  "ONE": 1,
  "SRC_COLOR": 768,
  "ONE_MINUS_SRC_COLOR": 769,
  "SRC_ALPHA": 770,
  "ONE_MINUS_SRC_ALPHA": 771,
  "DST_ALPHA": 772,
  "ONE_MINUS_DST_ALPHA": 773,
  "DST_COLOR": 774,
  "ONE_MINUS_DST_COLOR": 775,
  "SRC_ALPHA_SATURATE": 776,
  "TRUE": 1,
  "FALSE": "0",
  "CLIP_PLANE0": 12288,
  "CLIP_PLANE1": 12289,
  "CLIP_PLANE2": 12290,
  "CLIP_PLANE3": 12291,
  "CLIP_PLANE4": 12292,
  "CLIP_PLANE5": 12293,
  "BYTE": 5120,
  "UNSIGNED_BYTE": 5121,
  "SHORT": 5122,
  "UNSIGNED_SHORT": 5123,
  "INT": 5124,
  "UNSIGNED_INT": 5125,
  "FLOAT": 5126,
  "2_BYTES": 5127,
  "3_BYTES": 5128,
  "4_BYTES": 5129,
  "DOUBLE": 5130,
  "NONE": "0",
  "FRONT_LEFT": 1024,
  "FRONT_RIGHT": 1025,
  "BACK_LEFT": 1026,
  "BACK_RIGHT": 1027,
  "FRONT": 1028,
  "BACK": 1029,
  "LEFT": 1030,
  "RIGHT": 1031,
  "FRONT_AND_BACK": 1032,
  "AUX0": 1033,
  "AUX1": 1034,
  "AUX2": 1035,
  "AUX3": 1036,
  "NO_ERROR": "0",
  "INVALID_ENUM": 1280,
  "INVALID_VALUE": 1281,
  "INVALID_OPERATION": 1282,
  "STACK_OVERFLOW": 1283,
  "STACK_UNDERFLOW": 1284,
  "OUT_OF_MEMORY": 1285,
  "2D": 1536,
  "3D": 1537,
  "3D_COLOR": 1538,
  "3D_COLOR_TEXTURE": 1539,
  "4D_COLOR_TEXTURE": 1540,
  "PASS_THROUGH_TOKEN": 1792,
  "POINT_TOKEN": 1793,
  "LINE_TOKEN": 1794,
  "POLYGON_TOKEN": 1795,
  "BITMAP_TOKEN": 1796,
  "DRAW_PIXEL_TOKEN": 1797,
  "COPY_PIXEL_TOKEN": 1798,
  "LINE_RESET_TOKEN": 1799,
  "EXP": 2048,
  "EXP2": 2049,
  "CW": 2304,
  "CCW": 2305,
  "COEFF": 2560,
  "ORDER": 2561,
  "DOMAIN": 2562,
  "CURRENT_COLOR": 2816,
  "CURRENT_INDEX": 2817,
  "CURRENT_NORMAL": 2818,
  "CURRENT_TEXTURE_COORDS": 2819,
  "CURRENT_RASTER_COLOR": 2820,
  "CURRENT_RASTER_INDEX": 2821,
  "CURRENT_RASTER_TEXTURE_COORDS": 2822,
  "CURRENT_RASTER_POSITION": 2823,
  "CURRENT_RASTER_POSITION_VALID": 2824,
  "CURRENT_RASTER_DISTANCE": 2825,
  "POINT_SMOOTH": 2832,
  "POINT_SIZE": 2833,
  "POINT_SIZE_RANGE": 2834,
  "POINT_SIZE_GRANULARITY": 2835,
  "LINE_SMOOTH": 2848,
  "LINE_WIDTH": 2849,
  "LINE_WIDTH_RANGE": 2850,
  "LINE_WIDTH_GRANULARITY": 2851,
  "LINE_STIPPLE": 2852,
  "LINE_STIPPLE_PATTERN": 2853,
  "LINE_STIPPLE_REPEAT": 2854,
  "LIST_MODE": 2864,
  "MAX_LIST_NESTING": 2865,
  "LIST_BASE": 2866,
  "LIST_INDEX": 2867,
  "POLYGON_MODE": 2880,
  "POLYGON_SMOOTH": 2881,
  "POLYGON_STIPPLE": 2882,
  "EDGE_FLAG": 2883,
  "CULL_FACE": 2884,
  "CULL_FACE_MODE": 2885,
  "FRONT_FACE": 2886,
  "LIGHTING": 2896,
  "LIGHT_MODEL_LOCAL_VIEWER": 2897,
  "LIGHT_MODEL_TWO_SIDE": 2898,
  "LIGHT_MODEL_AMBIENT": 2899,
  "SHADE_MODEL": 2900,
  "COLOR_MATERIAL_FACE": 2901,
  "COLOR_MATERIAL_PARAMETER": 2902,
  "COLOR_MATERIAL": 2903,
  "FOG": 2912,
  "FOG_INDEX": 2913,
  "FOG_DENSITY": 2914,
  "FOG_START": 2915,
  "FOG_END": 2916,
  "FOG_MODE": 2917,
  "FOG_COLOR": 2918,
  "DEPTH_RANGE": 2928,
  "DEPTH_TEST": 2929,
  "DEPTH_WRITEMASK": 2930,
  "DEPTH_CLEAR_VALUE": 2931,
  "DEPTH_FUNC": 2932,
  "ACCUM_CLEAR_VALUE": 2944,
  "STENCIL_TEST": 2960,
  "STENCIL_CLEAR_VALUE": 2961,
  "STENCIL_FUNC": 2962,
  "STENCIL_VALUE_MASK": 2963,
  "STENCIL_FAIL": 2964,
  "STENCIL_PASS_DEPTH_FAIL": 2965,
  "STENCIL_PASS_DEPTH_PASS": 2966,
  "STENCIL_REF": 2967,
  "STENCIL_WRITEMASK": 2968,
  "MATRIX_MODE": 2976,
  "NORMALIZE": 2977,
  "VIEWPORT": 2978,
  "MODELVIEW_STACK_DEPTH": 2979,
  "PROJECTION_STACK_DEPTH": 2980,
  "TEXTURE_STACK_DEPTH": 2981,
  "MODELVIEW_MATRIX": 2982,
  "PROJECTION_MATRIX": 2983,
  "TEXTURE_MATRIX": 2984,
  "ATTRIB_STACK_DEPTH": 2992,
  "CLIENT_ATTRIB_STACK_DEPTH": 2993,
  "ALPHA_TEST": 3008,
  "ALPHA_TEST_FUNC": 3009,
  "ALPHA_TEST_REF": 3010,
  "DITHER": 3024,
  "BLEND_DST": 3040,
  "BLEND_SRC": 3041,
  "BLEND": 3042,
  "LOGIC_OP_MODE": 3056,
  "INDEX_LOGIC_OP": 3057,
  "COLOR_LOGIC_OP": 3058,
  "AUX_BUFFERS": 3072,
  "DRAW_BUFFER": 3073,
  "READ_BUFFER": 3074,
  "SCISSOR_BOX": 3088,
  "SCISSOR_TEST": 3089,
  "INDEX_CLEAR_VALUE": 3104,
  "INDEX_WRITEMASK": 3105,
  "COLOR_CLEAR_VALUE": 3106,
  "COLOR_WRITEMASK": 3107,
  "INDEX_MODE": 3120,
  "RGBA_MODE": 3121,
  "DOUBLEBUFFER": 3122,
  "STEREO": 3123,
  "RENDER_MODE": 3136,
  "PERSPECTIVE_CORRECTION_HINT": 3152,
  "POINT_SMOOTH_HINT": 3153,
  "LINE_SMOOTH_HINT": 3154,
  "POLYGON_SMOOTH_HINT": 3155,
  "FOG_HINT": 3156,
  "TEXTURE_GEN_S": 3168,
  "TEXTURE_GEN_T": 3169,
  "TEXTURE_GEN_R": 3170,
  "TEXTURE_GEN_Q": 3171,
  "PIXEL_MAP_I_TO_I": 3184,
  "PIXEL_MAP_S_TO_S": 3185,
  "PIXEL_MAP_I_TO_R": 3186,
  "PIXEL_MAP_I_TO_G": 3187,
  "PIXEL_MAP_I_TO_B": 3188,
  "PIXEL_MAP_I_TO_A": 3189,
  "PIXEL_MAP_R_TO_R": 3190,
  "PIXEL_MAP_G_TO_G": 3191,
  "PIXEL_MAP_B_TO_B": 3192,
  "PIXEL_MAP_A_TO_A": 3193,
  "PIXEL_MAP_I_TO_I_SIZE": 3248,
  "PIXEL_MAP_S_TO_S_SIZE": 3249,
  "PIXEL_MAP_I_TO_R_SIZE": 3250,
  "PIXEL_MAP_I_TO_G_SIZE": 3251,
  "PIXEL_MAP_I_TO_B_SIZE": 3252,
  "PIXEL_MAP_I_TO_A_SIZE": 3253,
  "PIXEL_MAP_R_TO_R_SIZE": 3254,
  "PIXEL_MAP_G_TO_G_SIZE": 3255,
  "PIXEL_MAP_B_TO_B_SIZE": 3256,
  "PIXEL_MAP_A_TO_A_SIZE": 3257,
  "UNPACK_SWAP_BYTES": 3312,
  "UNPACK_LSB_FIRST": 3313,
  "UNPACK_ROW_LENGTH": 3314,
  "UNPACK_SKIP_ROWS": 3315,
  "UNPACK_SKIP_PIXELS": 3316,
  "UNPACK_ALIGNMENT": 3317,
  "PACK_SWAP_BYTES": 3328,
  "PACK_LSB_FIRST": 3329,
  "PACK_ROW_LENGTH": 3330,
  "PACK_SKIP_ROWS": 3331,
  "PACK_SKIP_PIXELS": 3332,
  "PACK_ALIGNMENT": 3333,
  "MAP_COLOR": 3344,
  "MAP_STENCIL": 3345,
  "INDEX_SHIFT": 3346,
  "INDEX_OFFSET": 3347,
  "RED_SCALE": 3348,
  "RED_BIAS": 3349,
  "ZOOM_X": 3350,
  "ZOOM_Y": 3351,
  "GREEN_SCALE": 3352,
  "GREEN_BIAS": 3353,
  "BLUE_SCALE": 3354,
  "BLUE_BIAS": 3355,
  "ALPHA_SCALE": 3356,
  "ALPHA_BIAS": 3357,
  "DEPTH_SCALE": 3358,
  "DEPTH_BIAS": 3359,
  "MAX_EVAL_ORDER": 3376,
  "MAX_LIGHTS": 3377,
  "MAX_CLIP_PLANES": 3378,
  "MAX_TEXTURE_SIZE": 3379,
  "MAX_PIXEL_MAP_TABLE": 3380,
  "MAX_ATTRIB_STACK_DEPTH": 3381,
  "MAX_MODELVIEW_STACK_DEPTH": 3382,
  "MAX_NAME_STACK_DEPTH": 3383,
  "MAX_PROJECTION_STACK_DEPTH": 3384,
  "MAX_TEXTURE_STACK_DEPTH": 3385,
  "MAX_VIEWPORT_DIMS": 3386,
  "MAX_CLIENT_ATTRIB_STACK_DEPTH": 3387,
  "SUBPIXEL_BITS": 3408,
  "INDEX_BITS": 3409,
  "RED_BITS": 3410,
  "GREEN_BITS": 3411,
  "BLUE_BITS": 3412,
  "ALPHA_BITS": 3413,
  "DEPTH_BITS": 3414,
  "STENCIL_BITS": 3415,
  "ACCUM_RED_BITS": 3416,
  "ACCUM_GREEN_BITS": 3417,
  "ACCUM_BLUE_BITS": 3418,
  "ACCUM_ALPHA_BITS": 3419,
  "NAME_STACK_DEPTH": 3440,
  "AUTO_NORMAL": 3456,
  "MAP1_COLOR_4": 3472,
  "MAP1_INDEX": 3473,
  "MAP1_NORMAL": 3474,
  "MAP1_TEXTURE_COORD_1": 3475,
  "MAP1_TEXTURE_COORD_2": 3476,
  "MAP1_TEXTURE_COORD_3": 3477,
  "MAP1_TEXTURE_COORD_4": 3478,
  "MAP1_VERTEX_3": 3479,
  "MAP1_VERTEX_4": 3480,
  "MAP2_COLOR_4": 3504,
  "MAP2_INDEX": 3505,
  "MAP2_NORMAL": 3506,
  "MAP2_TEXTURE_COORD_1": 3507,
  "MAP2_TEXTURE_COORD_2": 3508,
  "MAP2_TEXTURE_COORD_3": 3509,
  "MAP2_TEXTURE_COORD_4": 3510,
  "MAP2_VERTEX_3": 3511,
  "MAP2_VERTEX_4": 3512,
  "MAP1_GRID_DOMAIN": 3536,
  "MAP1_GRID_SEGMENTS": 3537,
  "MAP2_GRID_DOMAIN": 3538,
  "MAP2_GRID_SEGMENTS": 3539,
  "TEXTURE_1D": 3552,
  "TEXTURE_2D": 3553,
  "FEEDBACK_BUFFER_POINTER": 3568,
  "FEEDBACK_BUFFER_SIZE": 3569,
  "FEEDBACK_BUFFER_TYPE": 3570,
  "SELECTION_BUFFER_POINTER": 3571,
  "SELECTION_BUFFER_SIZE": 3572,
  "TEXTURE_WIDTH": 4096,
  "TEXTURE_HEIGHT": 4097,
  "TEXTURE_INTERNAL_FORMAT": 4099,
  "TEXTURE_BORDER_COLOR": 4100,
  "TEXTURE_BORDER": 4101,
  "DONT_CARE": 4352,
  "FASTEST": 4353,
  "NICEST": 4354,
  "LIGHT0": 16384,
  "LIGHT1": 16385,
  "LIGHT2": 16386,
  "LIGHT3": 16387,
  "LIGHT4": 16388,
  "LIGHT5": 16389,
  "LIGHT6": 16390,
  "LIGHT7": 16391,
  "AMBIENT": 4608,
  "DIFFUSE": 4609,
  "SPECULAR": 4610,
  "POSITION": 4611,
  "SPOT_DIRECTION": 4612,
  "SPOT_EXPONENT": 4613,
  "SPOT_CUTOFF": 4614,
  "CONSTANT_ATTENUATION": 4615,
  "LINEAR_ATTENUATION": 4616,
  "QUADRATIC_ATTENUATION": 4617,
  "COMPILE": 4864,
  "COMPILE_AND_EXECUTE": 4865,
  "CLEAR": 5376,
  "AND": 5377,
  "AND_REVERSE": 5378,
  "COPY": 5379,
  "AND_INVERTED": 5380,
  "NOOP": 5381,
  "XOR": 5382,
  "OR": 5383,
  "NOR": 5384,
  "EQUIV": 5385,
  "INVERT": 5386,
  "OR_REVERSE": 5387,
  "COPY_INVERTED": 5388,
  "OR_INVERTED": 5389,
  "NAND": 5390,
  "SET": 5391,
  "EMISSION": 5632,
  "SHININESS": 5633,
  "AMBIENT_AND_DIFFUSE": 5634,
  "COLOR_INDEXES": 5635,
  "MODELVIEW": 5888,
  "PROJECTION": 5889,
  "TEXTURE": 5890,
  "COLOR": 6144,
  "DEPTH": 6145,
  "STENCIL": 6146,
  "COLOR_INDEX": 6400,
  "STENCIL_INDEX": 6401,
  "DEPTH_COMPONENT": 6402,
  "RED": 6403,
  "GREEN": 6404,
  "BLUE": 6405,
  "ALPHA": 6406,
  "RGB": 6407,
  "RGBA": 6408,
  "LUMINANCE": 6409,
  "LUMINANCE_ALPHA": 6410,
  "BITMAP": 6656,
  "POINT": 6912,
  "LINE": 6913,
  "FILL": 6914,
  "RENDER": 7168,
  "FEEDBACK": 7169,
  "SELECT": 7170,
  "FLAT": 7424,
  "SMOOTH": 7425,
  "KEEP": 7680,
  "REPLACE": 7681,
  "INCR": 7682,
  "DECR": 7683,
  "VENDOR": 7936,
  "RENDERER": 7937,
  "VERSION": 7938,
  "EXTENSIONS": 7939,
  "S": 8192,
  "T": 8193,
  "R": 8194,
  "Q": 8195,
  "MODULATE": 8448,
  "DECAL": 8449,
  "TEXTURE_ENV_MODE": 8704,
  "TEXTURE_ENV_COLOR": 8705,
  "TEXTURE_ENV": 8960,
  "EYE_LINEAR": 9216,
  "OBJECT_LINEAR": 9217,
  "SPHERE_MAP": 9218,
  "TEXTURE_GEN_MODE": 9472,
  "OBJECT_PLANE": 9473,
  "EYE_PLANE": 9474,
  "NEAREST": 9728,
  "LINEAR": 9729,
  "NEAREST_MIPMAP_NEAREST": 9984,
  "LINEAR_MIPMAP_NEAREST": 9985,
  "NEAREST_MIPMAP_LINEAR": 9986,
  "LINEAR_MIPMAP_LINEAR": 9987,
  "TEXTURE_MAG_FILTER": 10240,
  "TEXTURE_MIN_FILTER": 10241,
  "TEXTURE_WRAP_S": 10242,
  "TEXTURE_WRAP_T": 10243,
  "CLAMP": 10496,
  "REPEAT": 10497,
  "CLIENT_PIXEL_STORE_BIT": 1,
  "CLIENT_VERTEX_ARRAY_BIT": 2,
  "CLIENT_ALL_ATTRIB_BITS": 4294967295,
  "POLYGON_OFFSET_FACTOR": 32824,
  "POLYGON_OFFSET_UNITS": 10752,
  "POLYGON_OFFSET_POINT": 10753,
  "POLYGON_OFFSET_LINE": 10754,
  "POLYGON_OFFSET_FILL": 32823,
  "ALPHA4": 32827,
  "ALPHA8": 32828,
  "ALPHA12": 32829,
  "ALPHA16": 32830,
  "LUMINANCE4": 32831,
  "LUMINANCE8": 32832,
  "LUMINANCE12": 32833,
  "LUMINANCE16": 32834,
  "LUMINANCE4_ALPHA4": 32835,
  "LUMINANCE6_ALPHA2": 32836,
  "LUMINANCE8_ALPHA8": 32837,
  "LUMINANCE12_ALPHA4": 32838,
  "LUMINANCE12_ALPHA12": 32839,
  "LUMINANCE16_ALPHA16": 32840,
  "INTENSITY": 32841,
  "INTENSITY4": 32842,
  "INTENSITY8": 32843,
  "INTENSITY12": 32844,
  "INTENSITY16": 32845,
  "R3_G3_B2": 10768,
  "RGB4": 32847,
  "RGB5": 32848,
  "RGB8": 32849,
  "RGB10": 32850,
  "RGB12": 32851,
  "RGB16": 32852,
  "RGBA2": 32853,
  "RGBA4": 32854,
  "RGB5_A1": 32855,
  "RGBA8": 32856,
  "RGB10_A2": 32857,
  "RGBA12": 32858,
  "RGBA16": 32859,
  "TEXTURE_RED_SIZE": 32860,
  "TEXTURE_GREEN_SIZE": 32861,
  "TEXTURE_BLUE_SIZE": 32862,
  "TEXTURE_ALPHA_SIZE": 32863,
  "TEXTURE_LUMINANCE_SIZE": 32864,
  "TEXTURE_INTENSITY_SIZE": 32865,
  "PROXY_TEXTURE_1D": 32867,
  "PROXY_TEXTURE_2D": 32868,
  "TEXTURE_PRIORITY": 32870,
  "TEXTURE_RESIDENT": 32871,
  "TEXTURE_BINDING_1D": 32872,
  "TEXTURE_BINDING_2D": 32873,
  "VERTEX_ARRAY": 32884,
  "NORMAL_ARRAY": 32885,
  "COLOR_ARRAY": 32886,
  "INDEX_ARRAY": 32887,
  "TEXTURE_COORD_ARRAY": 32888,
  "EDGE_FLAG_ARRAY": 32889,
  "VERTEX_ARRAY_SIZE": 32890,
  "VERTEX_ARRAY_TYPE": 32891,
  "VERTEX_ARRAY_STRIDE": 32892,
  "NORMAL_ARRAY_TYPE": 32894,
  "NORMAL_ARRAY_STRIDE": 32895,
  "COLOR_ARRAY_SIZE": 32897,
  "COLOR_ARRAY_TYPE": 32898,
  "COLOR_ARRAY_STRIDE": 32899,
  "INDEX_ARRAY_TYPE": 32901,
  "INDEX_ARRAY_STRIDE": 32902,
  "TEXTURE_COORD_ARRAY_SIZE": 32904,
  "TEXTURE_COORD_ARRAY_TYPE": 32905,
  "TEXTURE_COORD_ARRAY_STRIDE": 32906,
  "EDGE_FLAG_ARRAY_STRIDE": 32908,
  "VERTEX_ARRAY_POINTER": 32910,
  "NORMAL_ARRAY_POINTER": 32911,
  "COLOR_ARRAY_POINTER": 32912,
  "INDEX_ARRAY_POINTER": 32913,
  "TEXTURE_COORD_ARRAY_POINTER": 32914,
  "EDGE_FLAG_ARRAY_POINTER": 32915,
  "V2F": 10784,
  "V3F": 10785,
  "C4UB_V2F": 10786,
  "C4UB_V3F": 10787,
  "C3F_V3F": 10788,
  "N3F_V3F": 10789,
  "C4F_N3F_V3F": 10790,
  "T2F_V3F": 10791,
  "T4F_V4F": 10792,
  "T2F_C4UB_V3F": 10793,
  "T2F_C3F_V3F": 10794,
  "T2F_N3F_V3F": 10795,
  "T2F_C4F_N3F_V3F": 10796,
  "T4F_C4F_N3F_V4F": 10797,
  "EXT_vertex_array": 1,
  "EXT_bgra": 1,
  "EXT_paletted_texture": 1,
  "WIN_swap_hint": 1,
  "WIN_draw_range_elements": 1,
  "VERTEX_ARRAY_EXT": 32884,
  "NORMAL_ARRAY_EXT": 32885,
  "COLOR_ARRAY_EXT": 32886,
  "INDEX_ARRAY_EXT": 32887,
  "TEXTURE_COORD_ARRAY_EXT": 32888,
  "EDGE_FLAG_ARRAY_EXT": 32889,
  "VERTEX_ARRAY_SIZE_EXT": 32890,
  "VERTEX_ARRAY_TYPE_EXT": 32891,
  "VERTEX_ARRAY_STRIDE_EXT": 32892,
  "VERTEX_ARRAY_COUNT_EXT": 32893,
  "NORMAL_ARRAY_TYPE_EXT": 32894,
  "NORMAL_ARRAY_STRIDE_EXT": 32895,
  "NORMAL_ARRAY_COUNT_EXT": 32896,
  "COLOR_ARRAY_SIZE_EXT": 32897,
  "COLOR_ARRAY_TYPE_EXT": 32898,
  "COLOR_ARRAY_STRIDE_EXT": 32899,
  "COLOR_ARRAY_COUNT_EXT": 32900,
  "INDEX_ARRAY_TYPE_EXT": 32901,
  "INDEX_ARRAY_STRIDE_EXT": 32902,
  "INDEX_ARRAY_COUNT_EXT": 32903,
  "TEXTURE_COORD_ARRAY_SIZE_EXT": 32904,
  "TEXTURE_COORD_ARRAY_TYPE_EXT": 32905,
  "TEXTURE_COORD_ARRAY_STRIDE_EXT": 32906,
  "TEXTURE_COORD_ARRAY_COUNT_EXT": 32907,
  "EDGE_FLAG_ARRAY_STRIDE_EXT": 32908,
  "EDGE_FLAG_ARRAY_COUNT_EXT": 32909,
  "VERTEX_ARRAY_POINTER_EXT": 32910,
  "NORMAL_ARRAY_POINTER_EXT": 32911,
  "COLOR_ARRAY_POINTER_EXT": 32912,
  "INDEX_ARRAY_POINTER_EXT": 32913,
  "TEXTURE_COORD_ARRAY_POINTER_EXT": 32914,
  "EDGE_FLAG_ARRAY_POINTER_EXT": 32915,
  "DOUBLE_EXT": "GL_DOUBLE",
  "BGR_EXT": 32992,
  "BGRA_EXT": 32993,
  "COLOR_TABLE_FORMAT_EXT": 32984,
  "COLOR_TABLE_WIDTH_EXT": 32985,
  "COLOR_TABLE_RED_SIZE_EXT": 32986,
  "COLOR_TABLE_GREEN_SIZE_EXT": 32987,
  "COLOR_TABLE_BLUE_SIZE_EXT": 32988,
  "COLOR_TABLE_ALPHA_SIZE_EXT": 32989,
  "COLOR_TABLE_LUMINANCE_SIZE_EXT": 32990,
  "COLOR_TABLE_INTENSITY_SIZE_EXT": 32991,
  "COLOR_INDEX1_EXT": 32994,
  "COLOR_INDEX2_EXT": 32995,
  "COLOR_INDEX4_EXT": 32996,
  "COLOR_INDEX8_EXT": 32997,
  "COLOR_INDEX12_EXT": 32998,
  "COLOR_INDEX16_EXT": 32999,
  "MAX_ELEMENTS_VERTICES_WIN": 33000,
  "MAX_ELEMENTS_INDICES_WIN": 33001,
  "PHONG_WIN": 33002,
  "PHONG_HINT_WIN": 33003,
  "FOG_SPECULAR_TEXTURE_WIN": 33004,
  "LOGIC_OP": "GL_INDEX_LOGIC_OP",
  "TEXTURE_COMPONENTS": "GL_TEXTURE_INTERNAL_FORMAT"
});

