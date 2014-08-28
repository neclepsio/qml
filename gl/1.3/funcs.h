
// ** file automatically generated by glgen -- do not edit manually **

#ifndef __cplusplus
#include <inttypes.h>
#include <stddef.h>
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void		GLvoid;
typedef char            GLchar;
typedef signed char	GLbyte;		/* 1-byte signed */
typedef short		GLshort;	/* 2-byte signed */
typedef int		GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int		GLsizei;	/* 4-byte signed */
typedef float		GLfloat;	/* single precision float */
typedef float		GLclampf;	/* single precision float in [0,1] */
typedef double		GLdouble;	/* double precision float */
typedef double		GLclampd;	/* double precision float in [0,1] */
typedef int64_t         GLint64;
typedef uint64_t        GLuint64;
typedef ptrdiff_t       GLintptr;
typedef ptrdiff_t       GLsizeiptr;
typedef ptrdiff_t       GLintptrARB;
typedef ptrdiff_t       GLsizeiptrARB;
typedef struct __GLsync *GLsync;
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *gl1_3_funcs();

void gl1_3_glViewport(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_3_glDepthRange(void *_glfuncs, GLdouble nearVal, GLdouble farVal);
GLboolean gl1_3_glIsEnabled(void *_glfuncs, GLenum cap);
void gl1_3_glGetTexLevelParameteriv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLint* params);
void gl1_3_glGetTexLevelParameterfv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLfloat* params);
void gl1_3_glGetTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_3_glGetTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_3_glGetTexImage(void *_glfuncs, GLenum target, GLint level, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_3_glGetIntegerv(void *_glfuncs, GLenum pname, GLint* params);
void gl1_3_glGetFloatv(void *_glfuncs, GLenum pname, GLfloat* params);
GLenum gl1_3_glGetError(void *_glfuncs);
void gl1_3_glGetDoublev(void *_glfuncs, GLenum pname, GLdouble* params);
void gl1_3_glGetBooleanv(void *_glfuncs, GLenum pname, GLboolean* params);
void gl1_3_glReadPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_3_glReadBuffer(void *_glfuncs, GLenum mode);
void gl1_3_glPixelStorei(void *_glfuncs, GLenum pname, GLint param);
void gl1_3_glPixelStoref(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_3_glDepthFunc(void *_glfuncs, GLenum glfunc);
void gl1_3_glStencilOp(void *_glfuncs, GLenum fail, GLenum zfail, GLenum zpass);
void gl1_3_glStencilFunc(void *_glfuncs, GLenum glfunc, GLint ref, GLuint mask);
void gl1_3_glLogicOp(void *_glfuncs, GLenum opcode);
void gl1_3_glBlendFunc(void *_glfuncs, GLenum sfactor, GLenum dfactor);
void gl1_3_glFlush(void *_glfuncs);
void gl1_3_glFinish(void *_glfuncs);
void gl1_3_glEnable(void *_glfuncs, GLenum cap);
void gl1_3_glDisable(void *_glfuncs, GLenum cap);
void gl1_3_glDepthMask(void *_glfuncs, GLboolean flag);
void gl1_3_glColorMask(void *_glfuncs, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void gl1_3_glStencilMask(void *_glfuncs, GLuint mask);
void gl1_3_glClearDepth(void *_glfuncs, GLdouble depth);
void gl1_3_glClearStencil(void *_glfuncs, GLint s);
void gl1_3_glClearColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_3_glClear(void *_glfuncs, GLbitfield mask);
void gl1_3_glDrawBuffer(void *_glfuncs, GLenum mode);
void gl1_3_glTexImage2D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_3_glTexImage1D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_3_glTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_3_glTexParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_3_glTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_3_glTexParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_3_glScissor(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_3_glPolygonMode(void *_glfuncs, GLenum face, GLenum mode);
void gl1_3_glPointSize(void *_glfuncs, GLfloat size);
void gl1_3_glLineWidth(void *_glfuncs, GLfloat width);
void gl1_3_glHint(void *_glfuncs, GLenum target, GLenum mode);
void gl1_3_glFrontFace(void *_glfuncs, GLenum mode);
void gl1_3_glCullFace(void *_glfuncs, GLenum mode);
void gl1_3_glIndexubv(void *_glfuncs, const GLubyte* c);
void gl1_3_glIndexub(void *_glfuncs, GLubyte c);
GLboolean gl1_3_glIsTexture(void *_glfuncs, GLuint texture);
void gl1_3_glGenTextures(void *_glfuncs, GLsizei n, GLuint* textures);
void gl1_3_glDeleteTextures(void *_glfuncs, GLsizei n, const GLuint* textures);
void gl1_3_glBindTexture(void *_glfuncs, GLenum target, GLuint texture);
void gl1_3_glTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_3_glTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_3_glCopyTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_3_glCopyTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void gl1_3_glCopyTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void gl1_3_glCopyTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
void gl1_3_glPolygonOffset(void *_glfuncs, GLfloat factor, GLfloat units);
void gl1_3_glDrawElements(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl1_3_glDrawArrays(void *_glfuncs, GLenum mode, GLint first, GLsizei count);
void gl1_3_glCopyTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_3_glTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_3_glTexImage3D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_3_glDrawRangeElements(void *_glfuncs, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl1_3_glBlendEquation(void *_glfuncs, GLenum mode);
void gl1_3_glBlendColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_3_glGetCompressedTexImage(void *_glfuncs, GLenum target, GLint level, GLvoid* img);
void gl1_3_glCompressedTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_3_glCompressedTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_3_glCompressedTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_3_glCompressedTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_3_glCompressedTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_3_glCompressedTexImage3D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_3_glSampleCoverage(void *_glfuncs, GLfloat value, GLboolean invert);
void gl1_3_glActiveTexture(void *_glfuncs, GLenum texture);
void gl1_3_glTranslatef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_3_glTranslated(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_3_glScalef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_3_glScaled(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_3_glRotatef(void *_glfuncs, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void gl1_3_glRotated(void *_glfuncs, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void gl1_3_glPushMatrix(void *_glfuncs);
void gl1_3_glPopMatrix(void *_glfuncs);
void gl1_3_glOrtho(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void gl1_3_glMultMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_3_glMultMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_3_glMatrixMode(void *_glfuncs, GLenum mode);
void gl1_3_glLoadMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_3_glLoadMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_3_glLoadIdentity(void *_glfuncs);
void gl1_3_glFrustum(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLboolean gl1_3_glIsList(void *_glfuncs, GLuint list);
void gl1_3_glGetTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, GLint* params);
void gl1_3_glGetTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, GLfloat* params);
void gl1_3_glGetTexGendv(void *_glfuncs, GLenum coord, GLenum pname, GLdouble* params);
void gl1_3_glGetTexEnviv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_3_glGetTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_3_glGetPolygonStipple(void *_glfuncs, GLubyte* mask);
void gl1_3_glGetPixelMapusv(void *_glfuncs, GLenum glmap, GLushort* values);
void gl1_3_glGetPixelMapuiv(void *_glfuncs, GLenum glmap, GLuint* values);
void gl1_3_glGetPixelMapfv(void *_glfuncs, GLenum glmap, GLfloat* values);
void gl1_3_glGetMaterialiv(void *_glfuncs, GLenum face, GLenum pname, GLint* params);
void gl1_3_glGetMaterialfv(void *_glfuncs, GLenum face, GLenum pname, GLfloat* params);
void gl1_3_glGetMapiv(void *_glfuncs, GLenum target, GLenum query, GLint* v);
void gl1_3_glGetMapfv(void *_glfuncs, GLenum target, GLenum query, GLfloat* v);
void gl1_3_glGetMapdv(void *_glfuncs, GLenum target, GLenum query, GLdouble* v);
void gl1_3_glGetLightiv(void *_glfuncs, GLenum light, GLenum pname, GLint* params);
void gl1_3_glGetLightfv(void *_glfuncs, GLenum light, GLenum pname, GLfloat* params);
void gl1_3_glGetClipPlane(void *_glfuncs, GLenum plane, GLdouble* equation);
void gl1_3_glDrawPixels(void *_glfuncs, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_3_glCopyPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum gltype);
void gl1_3_glPixelMapusv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLushort* values);
void gl1_3_glPixelMapuiv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLuint* values);
void gl1_3_glPixelMapfv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLfloat* values);
void gl1_3_glPixelTransferi(void *_glfuncs, GLenum pname, GLint param);
void gl1_3_glPixelTransferf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_3_glPixelZoom(void *_glfuncs, GLfloat xfactor, GLfloat yfactor);
void gl1_3_glAlphaFunc(void *_glfuncs, GLenum glfunc, GLfloat ref);
void gl1_3_glEvalPoint2(void *_glfuncs, GLint i, GLint j);
void gl1_3_glEvalMesh2(void *_glfuncs, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
void gl1_3_glEvalPoint1(void *_glfuncs, GLint i);
void gl1_3_glEvalMesh1(void *_glfuncs, GLenum mode, GLint i1, GLint i2);
void gl1_3_glEvalCoord2fv(void *_glfuncs, const GLfloat* u);
void gl1_3_glEvalCoord2f(void *_glfuncs, GLfloat u, GLfloat v);
void gl1_3_glEvalCoord2dv(void *_glfuncs, const GLdouble* u);
void gl1_3_glEvalCoord2d(void *_glfuncs, GLdouble u, GLdouble v);
void gl1_3_glEvalCoord1fv(void *_glfuncs, const GLfloat* u);
void gl1_3_glEvalCoord1f(void *_glfuncs, GLfloat u);
void gl1_3_glEvalCoord1dv(void *_glfuncs, const GLdouble* u);
void gl1_3_glEvalCoord1d(void *_glfuncs, GLdouble u);
void gl1_3_glMapGrid2f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void gl1_3_glMapGrid2d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void gl1_3_glMapGrid1f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2);
void gl1_3_glMapGrid1d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2);
void gl1_3_glMap2f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);
void gl1_3_glMap2d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
void gl1_3_glMap1f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
void gl1_3_glMap1d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
void gl1_3_glPushAttrib(void *_glfuncs, GLbitfield mask);
void gl1_3_glPopAttrib(void *_glfuncs);
void gl1_3_glAccum(void *_glfuncs, GLenum op, GLfloat value);
void gl1_3_glIndexMask(void *_glfuncs, GLuint mask);
void gl1_3_glClearIndex(void *_glfuncs, GLfloat c);
void gl1_3_glClearAccum(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_3_glPushName(void *_glfuncs, GLuint name);
void gl1_3_glPopName(void *_glfuncs);
void gl1_3_glPassThrough(void *_glfuncs, GLfloat token);
void gl1_3_glLoadName(void *_glfuncs, GLuint name);
void gl1_3_glInitNames(void *_glfuncs);
GLint gl1_3_glRenderMode(void *_glfuncs, GLenum mode);
void gl1_3_glSelectBuffer(void *_glfuncs, GLsizei size, GLuint* buffer);
void gl1_3_glFeedbackBuffer(void *_glfuncs, GLsizei size, GLenum gltype, GLfloat* buffer);
void gl1_3_glTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, const GLint* params);
void gl1_3_glTexGeni(void *_glfuncs, GLenum coord, GLenum pname, GLint param);
void gl1_3_glTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, const GLfloat* params);
void gl1_3_glTexGenf(void *_glfuncs, GLenum coord, GLenum pname, GLfloat param);
void gl1_3_glTexGendv(void *_glfuncs, GLenum coord, GLenum pname, const GLdouble* params);
void gl1_3_glTexGend(void *_glfuncs, GLenum coord, GLenum pname, GLdouble param);
void gl1_3_glTexEnviv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_3_glTexEnvi(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_3_glTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_3_glTexEnvf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_3_glShadeModel(void *_glfuncs, GLenum mode);
void gl1_3_glPolygonStipple(void *_glfuncs, const GLubyte* mask);
void gl1_3_glMaterialiv(void *_glfuncs, GLenum face, GLenum pname, const GLint* params);
void gl1_3_glMateriali(void *_glfuncs, GLenum face, GLenum pname, GLint param);
void gl1_3_glMaterialfv(void *_glfuncs, GLenum face, GLenum pname, const GLfloat* params);
void gl1_3_glMaterialf(void *_glfuncs, GLenum face, GLenum pname, GLfloat param);
void gl1_3_glLineStipple(void *_glfuncs, GLint factor, GLushort pattern);
void gl1_3_glLightModeliv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_3_glLightModeli(void *_glfuncs, GLenum pname, GLint param);
void gl1_3_glLightModelfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_3_glLightModelf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_3_glLightiv(void *_glfuncs, GLenum light, GLenum pname, const GLint* params);
void gl1_3_glLighti(void *_glfuncs, GLenum light, GLenum pname, GLint param);
void gl1_3_glLightfv(void *_glfuncs, GLenum light, GLenum pname, const GLfloat* params);
void gl1_3_glLightf(void *_glfuncs, GLenum light, GLenum pname, GLfloat param);
void gl1_3_glFogiv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_3_glFogi(void *_glfuncs, GLenum pname, GLint param);
void gl1_3_glFogfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_3_glFogf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_3_glColorMaterial(void *_glfuncs, GLenum face, GLenum mode);
void gl1_3_glClipPlane(void *_glfuncs, GLenum plane, const GLdouble* equation);
void gl1_3_glVertex4sv(void *_glfuncs, const GLshort* v);
void gl1_3_glVertex4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_3_glVertex4iv(void *_glfuncs, const GLint* v);
void gl1_3_glVertex4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_3_glVertex4fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glVertex4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_3_glVertex4dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glVertex4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_3_glVertex3sv(void *_glfuncs, const GLshort* v);
void gl1_3_glVertex3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_3_glVertex3iv(void *_glfuncs, const GLint* v);
void gl1_3_glVertex3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_3_glVertex3fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glVertex3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_3_glVertex3dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glVertex3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_3_glVertex2sv(void *_glfuncs, const GLshort* v);
void gl1_3_glVertex2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_3_glVertex2iv(void *_glfuncs, const GLint* v);
void gl1_3_glVertex2i(void *_glfuncs, GLint x, GLint y);
void gl1_3_glVertex2fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glVertex2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_3_glVertex2dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glVertex2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_3_glTexCoord4sv(void *_glfuncs, const GLshort* v);
void gl1_3_glTexCoord4s(void *_glfuncs, GLshort s, GLshort t, GLshort r, GLshort q);
void gl1_3_glTexCoord4iv(void *_glfuncs, const GLint* v);
void gl1_3_glTexCoord4i(void *_glfuncs, GLint s, GLint t, GLint r, GLint q);
void gl1_3_glTexCoord4fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glTexCoord4f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void gl1_3_glTexCoord4dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glTexCoord4d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void gl1_3_glTexCoord3sv(void *_glfuncs, const GLshort* v);
void gl1_3_glTexCoord3s(void *_glfuncs, GLshort s, GLshort t, GLshort r);
void gl1_3_glTexCoord3iv(void *_glfuncs, const GLint* v);
void gl1_3_glTexCoord3i(void *_glfuncs, GLint s, GLint t, GLint r);
void gl1_3_glTexCoord3fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glTexCoord3f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r);
void gl1_3_glTexCoord3dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glTexCoord3d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r);
void gl1_3_glTexCoord2sv(void *_glfuncs, const GLshort* v);
void gl1_3_glTexCoord2s(void *_glfuncs, GLshort s, GLshort t);
void gl1_3_glTexCoord2iv(void *_glfuncs, const GLint* v);
void gl1_3_glTexCoord2i(void *_glfuncs, GLint s, GLint t);
void gl1_3_glTexCoord2fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glTexCoord2f(void *_glfuncs, GLfloat s, GLfloat t);
void gl1_3_glTexCoord2dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glTexCoord2d(void *_glfuncs, GLdouble s, GLdouble t);
void gl1_3_glTexCoord1sv(void *_glfuncs, const GLshort* v);
void gl1_3_glTexCoord1s(void *_glfuncs, GLshort s);
void gl1_3_glTexCoord1iv(void *_glfuncs, const GLint* v);
void gl1_3_glTexCoord1i(void *_glfuncs, GLint s);
void gl1_3_glTexCoord1fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glTexCoord1f(void *_glfuncs, GLfloat s);
void gl1_3_glTexCoord1dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glTexCoord1d(void *_glfuncs, GLdouble s);
void gl1_3_glRectsv(void *_glfuncs, const GLshort* v1, const GLshort* v2);
void gl1_3_glRects(void *_glfuncs, GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void gl1_3_glRectiv(void *_glfuncs, const GLint* v1, const GLint* v2);
void gl1_3_glRecti(void *_glfuncs, GLint x1, GLint y1, GLint x2, GLint y2);
void gl1_3_glRectfv(void *_glfuncs, const GLfloat* v1, const GLfloat* v2);
void gl1_3_glRectf(void *_glfuncs, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void gl1_3_glRectdv(void *_glfuncs, const GLdouble* v1, const GLdouble* v2);
void gl1_3_glRectd(void *_glfuncs, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void gl1_3_glRasterPos4sv(void *_glfuncs, const GLshort* v);
void gl1_3_glRasterPos4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_3_glRasterPos4iv(void *_glfuncs, const GLint* v);
void gl1_3_glRasterPos4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_3_glRasterPos4fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glRasterPos4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_3_glRasterPos4dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glRasterPos4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_3_glRasterPos3sv(void *_glfuncs, const GLshort* v);
void gl1_3_glRasterPos3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_3_glRasterPos3iv(void *_glfuncs, const GLint* v);
void gl1_3_glRasterPos3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_3_glRasterPos3fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glRasterPos3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_3_glRasterPos3dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glRasterPos3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_3_glRasterPos2sv(void *_glfuncs, const GLshort* v);
void gl1_3_glRasterPos2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_3_glRasterPos2iv(void *_glfuncs, const GLint* v);
void gl1_3_glRasterPos2i(void *_glfuncs, GLint x, GLint y);
void gl1_3_glRasterPos2fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glRasterPos2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_3_glRasterPos2dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glRasterPos2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_3_glNormal3sv(void *_glfuncs, const GLshort* v);
void gl1_3_glNormal3s(void *_glfuncs, GLshort nx, GLshort ny, GLshort nz);
void gl1_3_glNormal3iv(void *_glfuncs, const GLint* v);
void gl1_3_glNormal3i(void *_glfuncs, GLint nx, GLint ny, GLint nz);
void gl1_3_glNormal3fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glNormal3f(void *_glfuncs, GLfloat nx, GLfloat ny, GLfloat nz);
void gl1_3_glNormal3dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glNormal3d(void *_glfuncs, GLdouble nx, GLdouble ny, GLdouble nz);
void gl1_3_glNormal3bv(void *_glfuncs, const GLbyte* v);
void gl1_3_glNormal3b(void *_glfuncs, GLbyte nx, GLbyte ny, GLbyte nz);
void gl1_3_glIndexsv(void *_glfuncs, const GLshort* c);
void gl1_3_glIndexs(void *_glfuncs, GLshort c);
void gl1_3_glIndexiv(void *_glfuncs, const GLint* c);
void gl1_3_glIndexi(void *_glfuncs, GLint c);
void gl1_3_glIndexfv(void *_glfuncs, const GLfloat* c);
void gl1_3_glIndexf(void *_glfuncs, GLfloat c);
void gl1_3_glIndexdv(void *_glfuncs, const GLdouble* c);
void gl1_3_glIndexd(void *_glfuncs, GLdouble c);
void gl1_3_glEnd(void *_glfuncs);
void gl1_3_glEdgeFlagv(void *_glfuncs, const GLboolean* flag);
void gl1_3_glEdgeFlag(void *_glfuncs, GLboolean flag);
void gl1_3_glColor4usv(void *_glfuncs, const GLushort* v);
void gl1_3_glColor4us(void *_glfuncs, GLushort red, GLushort green, GLushort blue, GLushort alpha);
void gl1_3_glColor4uiv(void *_glfuncs, const GLuint* v);
void gl1_3_glColor4ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue, GLuint alpha);
void gl1_3_glColor4ubv(void *_glfuncs, const GLubyte* v);
void gl1_3_glColor4ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void gl1_3_glColor4sv(void *_glfuncs, const GLshort* v);
void gl1_3_glColor4s(void *_glfuncs, GLshort red, GLshort green, GLshort blue, GLshort alpha);
void gl1_3_glColor4iv(void *_glfuncs, const GLint* v);
void gl1_3_glColor4i(void *_glfuncs, GLint red, GLint green, GLint blue, GLint alpha);
void gl1_3_glColor4fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glColor4f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_3_glColor4dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glColor4d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void gl1_3_glColor4bv(void *_glfuncs, const GLbyte* v);
void gl1_3_glColor4b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void gl1_3_glColor3usv(void *_glfuncs, const GLushort* v);
void gl1_3_glColor3us(void *_glfuncs, GLushort red, GLushort green, GLushort blue);
void gl1_3_glColor3uiv(void *_glfuncs, const GLuint* v);
void gl1_3_glColor3ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue);
void gl1_3_glColor3ubv(void *_glfuncs, const GLubyte* v);
void gl1_3_glColor3ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue);
void gl1_3_glColor3sv(void *_glfuncs, const GLshort* v);
void gl1_3_glColor3s(void *_glfuncs, GLshort red, GLshort green, GLshort blue);
void gl1_3_glColor3iv(void *_glfuncs, const GLint* v);
void gl1_3_glColor3i(void *_glfuncs, GLint red, GLint green, GLint blue);
void gl1_3_glColor3fv(void *_glfuncs, const GLfloat* v);
void gl1_3_glColor3f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue);
void gl1_3_glColor3dv(void *_glfuncs, const GLdouble* v);
void gl1_3_glColor3d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue);
void gl1_3_glColor3bv(void *_glfuncs, const GLbyte* v);
void gl1_3_glColor3b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue);
void gl1_3_glBitmap(void *_glfuncs, GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap);
void gl1_3_glBegin(void *_glfuncs, GLenum mode);
void gl1_3_glListBase(void *_glfuncs, GLuint base);
GLuint gl1_3_glGenLists(void *_glfuncs, GLsizei range_);
void gl1_3_glDeleteLists(void *_glfuncs, GLuint list, GLsizei range_);
void gl1_3_glCallLists(void *_glfuncs, GLsizei n, GLenum gltype, const GLvoid* lists);
void gl1_3_glCallList(void *_glfuncs, GLuint list);
void gl1_3_glEndList(void *_glfuncs);
void gl1_3_glNewList(void *_glfuncs, GLuint list, GLenum mode);
void gl1_3_glPushClientAttrib(void *_glfuncs, GLbitfield mask);
void gl1_3_glPopClientAttrib(void *_glfuncs);
void gl1_3_glPrioritizeTextures(void *_glfuncs, GLsizei n, const GLuint* textures, const GLfloat* priorities);
GLboolean gl1_3_glAreTexturesResident(void *_glfuncs, GLsizei n, const GLuint* textures, GLboolean* residences);
void gl1_3_glVertexPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_3_glTexCoordPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_3_glNormalPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_3_glInterleavedArrays(void *_glfuncs, GLenum format, GLsizei stride, const GLvoid* pointer);
void gl1_3_glIndexPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_3_glEnableClientState(void *_glfuncs, GLenum array);
void gl1_3_glEdgeFlagPointer(void *_glfuncs, GLsizei stride, const GLvoid* pointer);
void gl1_3_glDisableClientState(void *_glfuncs, GLenum array);
void gl1_3_glColorPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_3_glArrayElement(void *_glfuncs, GLint i);
void gl1_3_glResetMinmax(void *_glfuncs, GLenum target);
void gl1_3_glResetHistogram(void *_glfuncs, GLenum target);
void gl1_3_glMinmax(void *_glfuncs, GLenum target, GLenum internalformat, GLboolean sink);
void gl1_3_glHistogram(void *_glfuncs, GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
void gl1_3_glGetMinmaxParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_3_glGetMinmaxParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_3_glGetMinmax(void *_glfuncs, GLenum target, GLboolean reset, GLenum format, GLenum gltype, GLvoid* values);
void gl1_3_glGetHistogramParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_3_glGetHistogramParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_3_glGetHistogram(void *_glfuncs, GLenum target, GLboolean reset, GLenum format, GLenum gltype, GLvoid* values);
void gl1_3_glSeparableFilter2D(void *_glfuncs, GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* row, const GLvoid* column);
void gl1_3_glGetSeparableFilter(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* row, GLvoid* column, GLvoid* span);
void gl1_3_glGetConvolutionParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_3_glGetConvolutionParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_3_glGetConvolutionFilter(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* image);
void gl1_3_glCopyConvolutionFilter2D(void *_glfuncs, GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_3_glCopyConvolutionFilter1D(void *_glfuncs, GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
void gl1_3_glConvolutionParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_3_glConvolutionParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint params);
void gl1_3_glConvolutionParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_3_glConvolutionParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat params);
void gl1_3_glConvolutionFilter2D(void *_glfuncs, GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* image);
void gl1_3_glConvolutionFilter1D(void *_glfuncs, GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum gltype, const GLvoid* image);
void gl1_3_glCopyColorSubTable(void *_glfuncs, GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
void gl1_3_glColorSubTable(void *_glfuncs, GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum gltype, const GLvoid* data);
void gl1_3_glGetColorTableParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_3_glGetColorTableParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_3_glGetColorTable(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* table);
void gl1_3_glCopyColorTable(void *_glfuncs, GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
void gl1_3_glColorTableParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_3_glColorTableParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_3_glColorTable(void *_glfuncs, GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum gltype, const GLvoid* table);
void gl1_3_glMultTransposeMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_3_glMultTransposeMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_3_glLoadTransposeMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_3_glLoadTransposeMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_3_glMultiTexCoord4sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_3_glMultiTexCoord4s(void *_glfuncs, GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
void gl1_3_glMultiTexCoord4iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_3_glMultiTexCoord4i(void *_glfuncs, GLenum target, GLint s, GLint t, GLint r, GLint q);
void gl1_3_glMultiTexCoord4fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_3_glMultiTexCoord4f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void gl1_3_glMultiTexCoord4dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_3_glMultiTexCoord4d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void gl1_3_glMultiTexCoord3sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_3_glMultiTexCoord3s(void *_glfuncs, GLenum target, GLshort s, GLshort t, GLshort r);
void gl1_3_glMultiTexCoord3iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_3_glMultiTexCoord3i(void *_glfuncs, GLenum target, GLint s, GLint t, GLint r);
void gl1_3_glMultiTexCoord3fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_3_glMultiTexCoord3f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t, GLfloat r);
void gl1_3_glMultiTexCoord3dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_3_glMultiTexCoord3d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t, GLdouble r);
void gl1_3_glMultiTexCoord2sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_3_glMultiTexCoord2s(void *_glfuncs, GLenum target, GLshort s, GLshort t);
void gl1_3_glMultiTexCoord2iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_3_glMultiTexCoord2i(void *_glfuncs, GLenum target, GLint s, GLint t);
void gl1_3_glMultiTexCoord2fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_3_glMultiTexCoord2f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t);
void gl1_3_glMultiTexCoord2dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_3_glMultiTexCoord2d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t);
void gl1_3_glMultiTexCoord1sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_3_glMultiTexCoord1s(void *_glfuncs, GLenum target, GLshort s);
void gl1_3_glMultiTexCoord1iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_3_glMultiTexCoord1i(void *_glfuncs, GLenum target, GLint s);
void gl1_3_glMultiTexCoord1fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_3_glMultiTexCoord1f(void *_glfuncs, GLenum target, GLfloat s);
void gl1_3_glMultiTexCoord1dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_3_glMultiTexCoord1d(void *_glfuncs, GLenum target, GLdouble s);
void gl1_3_glClientActiveTexture(void *_glfuncs, GLenum texture);


#ifdef __cplusplus
} // extern "C"
#endif