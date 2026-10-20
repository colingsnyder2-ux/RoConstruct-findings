// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: ogre-1.4.5-dll roc_sphere_native_end_cache_d23105ca808280a5.cpp

// Candidate translation unit (score above; library headers required).
/*
** License Applicability. Except to the extent portions of this file are
** made subject to an alternative license as permitted in the SGI Free
** Software License B, Version 1.1 (the "License"), the contents of this
** file are subject only to the provisions of the License. You may not use
** this file except in compliance with the License. You may obtain a copy
** of the License at Silicon Graphics, Inc., attn: Legal Services, 1600
** Amphitheatre Parkway, Mountain View, CA 94043-1351, or at:
**
** http://oss.sgi.com/projects/FreeB
**
** Note that, as provided in the License, the Software is distributed on an
** "AS IS" basis, with ALL EXPRESS AND IMPLIED WARRANTIES AND CONDITIONS
** DISCLAIMED, INCLUDING, WITHOUT LIMITATION, ANY IMPLIED WARRANTIES AND
** CONDITIONS OF MERCHANTABILITY, SATISFACTORY QUALITY, FITNESS FOR A
** PARTICULAR PURPOSE, AND NON-INFRINGEMENT.
**
** Original Code. The Original Code is: OpenGL Sample Implementation,
** Version 1.2.1, released January 26, 2000, developed by Silicon Graphics,
** Inc. The Original Code is Copyright (c) 1991-2000 Silicon Graphics, Inc.
** Copyright in any portions created by third parties is as indicated
** elsewhere herein. All Rights Reserved.
**
** Additional Notice Provisions: The application programming interfaces
** established by SGI in conjunction with the Original Code are The
** OpenGL(R) Graphics System: A Specification (Version 1.2.1), released
** April 1, 1999; The OpenGL(R) Graphics System Utility Library (Version
** 1.3), released November 4, 1998; and OpenGL(R) Graphics with the X
** Window System(R) (Version 1.3), released October 19, 1998. This software
** was created using the OpenGL(R) version 1.2.1 Sample Implementation
** published by SGI, but has not been independently verified as being
** compliant with the OpenGL(R) version 1.2.1 Specification.
**
*/


#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
#include <math.h>
#include <vector>
using namespace Ogre;
typedef int GLint;
typedef float GLfloat;
typedef bool GLboolean;
#define CACHE_SIZE 240
#define PI Math::PI
#define SIN(x) sin(x)
#define COS(x) cos(x)
#define GLU_SMOOTH 0
#define GLU_FLAT 1
#define GLU_NONE 2
#define GLU_OUTSIDE 0
#define GLU_INSIDE 1
#define GLU_POINT 0
#define GLU_LINE 1
#define GLU_FILL 2
#define GLU_SILHOUETTE 3
#define GL_FALSE false
#define GL_TRUE true
#define GL_POINTS RenderOperation::OT_POINT_LIST
#define GL_LINE_STRIP RenderOperation::OT_LINE_STRIP
#define GL_TRIANGLE_FAN RenderOperation::OT_TRIANGLE_FAN
#define GL_QUAD_STRIP RenderOperation::OT_TRIANGLE_STRIP

#define glBegin(type) do { object->begin("", type); if (colour.r >= 0) object->colour(colour); vertexIndex=0; } while (0)
#define glEnd() object->end()
#define glNormal3f(vx,vy,vz) object->normal(vx,vy,vz)
#define saveNormal(vx,vy,vz) (normal = Vector3(vx,vy,vz))
#define glTexCoord2f(tu,tv) object->textureCoord(tu,tv)
#define glVertex3f(vx,vy,vz) do { object->position(offset.x+(vx),offset.y+(vy),offset.z+(vz)); object->index(vertexIndex++); } while (0)
#define stripVertex(vx,vy,vz) do { \
    unsigned count=vertices.size(); \
    if (count>=2) { \
        if ((int)count%2) { \
            object->position(vertices[count-1]); object->index(vertexIndex++); object->normal(recordedNormals[count-1]); \
            object->position(vertices[count-2]); object->index(vertexIndex++); object->normal(recordedNormals[count-2]); \
            object->position(offset.x+(vx),offset.y+(vy),offset.z+(vz)); object->index(vertexIndex++); object->normal(normal); vertices.push_back(Vector3(offset.x+(vx),offset.y+(vy),offset.z+(vz))); \
        } else { \
            object->position(vertices[count-2]); object->index(vertexIndex++); object->normal(recordedNormals[count-2]); \
            object->position(vertices[count-1]); object->index(vertexIndex++); object->normal(recordedNormals[count-1]); \
            object->position(offset.x+(vx),offset.y+(vy),offset.z+(vz)); object->index(vertexIndex++); object->normal(normal); vertices.push_back(Vector3(offset.x+(vx),offset.y+(vy),offset.z+(vz))); \
        } \
    } \
    else { vertices.push_back(Vector3(offset.x+(vx),offset.y+(vy),offset.z+(vz))); } recordedNormals.push_back(normal); \
} while (0)
class QuadricRecovery {
public:
    int normals;
    bool textureCoords;
    int orientation;
    int drawStyle;
    ColourValue colour;
    Vector3 offset;
    ManualObject* sphere(SceneManager* manager, const String& name, ManualObject* object, Real radius, GLint slices, GLint stacks);
};
ManualObject* QuadricRecovery::sphere(SceneManager* manager, const String& name, ManualObject* object, Real radius, GLint slices, GLint stacks)
{
    QuadricRecovery* qobj = this;
    if (!object) object = manager->createManualObject(name);
    Vector3 normal;
    unsigned vertexIndex = 0;

    GLint i,j;
    GLfloat cache[12][CACHE_SIZE];
#define sinCache1a cache[0]
#define cosCache1a cache[1]
#define cosCache2a cache[2]
#define sinCache2a cache[3]
#define sinCache1b cache[4]
#define cosCache2b cache[5]
#define sinCache2b cache[6]
#define cosCache1b cache[7]
#define sinCache3a cache[8]
#define cosCache3a cache[9]
#define sinCache3b cache[10]
#define cosCache3b cache[11]
    GLfloat angle;
    GLfloat zLow, zHigh;
    GLfloat sintemp1, sintemp2, sintemp3 = 0.0, sintemp4 = 0.0;
    GLfloat costemp1, costemp2 = 0.0, costemp3 = 0.0, costemp4 = 0.0;
    GLboolean needCache2, needCache3;
    GLint start, finish;

    if (slices >= CACHE_SIZE) slices = CACHE_SIZE-1;
    if (stacks >= CACHE_SIZE) stacks = CACHE_SIZE-1;
    if (slices < 2 || stacks < 1 || radius < 0.0) {
	
	return 0;
    }

    /* Cache is the vertex locations cache */
    /* Cache2 is the various normals at the vertices themselves */
    /* Cache3 is the various normals for the faces */
    needCache2 = needCache3 = GL_FALSE;

    if (qobj->normals == GLU_SMOOTH) {
	needCache2 = GL_TRUE;
    }

    if (qobj->normals == GLU_FLAT) {
	if (qobj->drawStyle != GLU_POINT) {
	    needCache3 = GL_TRUE;
	}
	if (qobj->drawStyle == GLU_LINE) {
	    needCache2 = GL_TRUE;
	}
    }

    for (i = 0; i < slices; i++) {
	angle = 2 * PI * i / slices;
	sinCache1a[i] = SIN(angle);
	cosCache1a[i] = COS(angle);
	if (needCache2) {
	    sinCache2a[i] = sinCache1a[i];
	    cosCache2a[i] = cosCache1a[i];
	}
    }

    for (j = 0; j <= stacks; j++) {
	angle = PI * j / stacks;
	if (needCache2) {
	    if (qobj->orientation == GLU_OUTSIDE) {
		sinCache2b[j] = SIN(angle);
		cosCache2b[j] = COS(angle);
	    } else {
		sinCache2b[j] = -SIN(angle);
		cosCache2b[j] = -COS(angle);
	    }
	}
	sinCache1b[j] = radius * SIN(angle);
	cosCache1b[j] = radius * COS(angle);
    }
    /* Make sure it comes to a point */
    sinCache1b[0] = 0;
    GLfloat* endSinCache1b = sinCache1b + stacks;
    *endSinCache1b = 0;

    if (needCache3) {
	for (i = 0; i < slices; i++) {
	    angle = 2 * PI * (i-0.5) / slices;
	    sinCache3a[i] = SIN(angle);
	    cosCache3a[i] = COS(angle);
	}
	for (j = 0; j <= stacks; j++) {
	    angle = PI * (j - 0.5) / stacks;
	    if (qobj->orientation == GLU_OUTSIDE) {
		sinCache3b[j] = SIN(angle);
		cosCache3b[j] = COS(angle);
	    } else {
		sinCache3b[j] = -SIN(angle);
		cosCache3b[j] = -COS(angle);
	    }
	}
    }

    sinCache1a[slices] = sinCache1a[0];
    cosCache1a[slices] = cosCache1a[0];
    if (needCache2) {
	sinCache2a[slices] = sinCache2a[0];
	cosCache2a[slices] = cosCache2a[0];
    }
    if (needCache3) {
	sinCache3a[slices] = sinCache3a[0];
	cosCache3a[slices] = cosCache3a[0];
    }

    switch (qobj->drawStyle) {
      case GLU_FILL:
	/* Do ends of sphere as TRIANGLE_FAN's (if not texturing)
	** We don't do it when texturing because we need to respecify the
	** texture coordinates of the apex for every adjacent vertex (because
	** it isn't a constant for that point)
	*/
	if (!(qobj->textureCoords)) {
	    start = 1;
	    finish = stacks - 1;

	    glBegin(GL_TRIANGLE_FAN);
	    glVertex3f(0.0, 0.0, radius);
	    /* Low end first (j == 0 iteration) */
	    sintemp2 = sinCache1b[1];
	    zHigh = cosCache1b[1];
	    switch(qobj->normals) {
	      case GLU_FLAT:
		sintemp3 = sinCache3b[1];
		costemp3 = cosCache3b[1];
		break;
	      case GLU_SMOOTH:
		sintemp3 = sinCache2b[1];
		costemp3 = cosCache2b[1];
		glNormal3f(sinCache2a[0] * sinCache2b[0],
			cosCache2a[0] * sinCache2b[0],
			cosCache2b[0]);
		break;
	      default:
		break;
	    }
	    if (qobj->orientation == GLU_OUTSIDE) {
		for (i = slices; i >= 0; i--) {
glVertex3f(sintemp2 * sinCache1a[i],
			    sintemp2 * cosCache1a[i], zHigh);

		    switch(qobj->normals) {
		      case GLU_SMOOTH:
			glNormal3f(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case GLU_FLAT:
			if (i != slices) {
			    glNormal3f(sinCache3a[i+1] * sintemp3,
				    cosCache3a[i+1] * sintemp3,
				    costemp3);
			}
			break;
		      case GLU_NONE:
		      default:
			break;
		    }
		}
	    } else {
		for (i = 0; i <= slices; i++) {
glVertex3f(sintemp2 * sinCache1a[i],
			    sintemp2 * cosCache1a[i], zHigh);

		    switch(qobj->normals) {
		      case GLU_SMOOTH:
			glNormal3f(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case GLU_FLAT:
			glNormal3f(sinCache3a[i] * sintemp3,
				cosCache3a[i] * sintemp3,
				costemp3);
			break;
		      case GLU_NONE:
		      default:
			break;
		    }
		}
	    }
	    glEnd();

	    glBegin(GL_TRIANGLE_FAN);
	    glVertex3f(0.0, 0.0, -radius);
	    if (qobj->orientation == GLU_OUTSIDE) {
	    /* High end next (j == stacks-1 iteration) */
	    sintemp2 = endSinCache1b[-1];
	    zHigh = cosCache1b[stacks-1];
	    switch(qobj->normals) {
	      case GLU_FLAT:
		sintemp3 = sinCache3b[stacks];
		costemp3 = cosCache3b[stacks];
		break;
	      case GLU_SMOOTH:
		sintemp3 = sinCache2b[stacks-1];
		costemp3 = cosCache2b[stacks-1];
		glNormal3f(sinCache2a[stacks] * sinCache2b[stacks],
			cosCache2a[stacks] * sinCache2b[stacks],
			cosCache2b[stacks]);
		break;
	      default:
		break;
	    }
		for (i = 0; i <= slices; i++) {
glVertex3f(sintemp2 * sinCache1a[i],
			    sintemp2 * cosCache1a[i], zHigh);

		    switch(qobj->normals) {
		      case GLU_SMOOTH:
			glNormal3f(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case GLU_FLAT:
			glNormal3f(sinCache3a[i] * sintemp3,
				cosCache3a[i] * sintemp3,
				costemp3);
			break;
		      case GLU_NONE:
		      default:
			break;
		    }
		}
	    } else {
		for (i = slices; i >= 0; i--) {
glVertex3f(sintemp2 * sinCache1a[i],
			    sintemp2 * cosCache1a[i], zHigh);

		    switch(qobj->normals) {
		      case GLU_SMOOTH:
			glNormal3f(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case GLU_FLAT:
			if (i != slices) {
			    glNormal3f(sinCache3a[i+1] * sintemp3,
				    cosCache3a[i+1] * sintemp3,
				    costemp3);
			}
			break;
		      case GLU_NONE:
		      default:
			break;
		    }
		}
	    }
	    glEnd();
	} else {
	    start = 0;
	    finish = stacks;
	}
	for (j = start; j < finish; j++) {
	    zLow = cosCache1b[j];
	    zHigh = cosCache1b[j+1];
	    sintemp1 = sinCache1b[j];
	    sintemp2 = sinCache1b[j+1];
	    switch(qobj->normals) {
	      case GLU_FLAT:
		sintemp4 = sinCache3b[j+1];
		costemp4 = cosCache3b[j+1];
		break;
	      case GLU_SMOOTH:
		if (qobj->orientation == GLU_OUTSIDE) {
		    sintemp3 = sinCache2b[j+1];
		    costemp3 = cosCache2b[j+1];
		    sintemp4 = sinCache2b[j];
		    costemp4 = cosCache2b[j];
		} else {
		    sintemp3 = sinCache2b[j];
		    costemp3 = cosCache2b[j];
		    sintemp4 = sinCache2b[j+1];
		    costemp4 = cosCache2b[j+1];
		}
		break;
	      default:
		break;
	    }

	    { std::vector<Vector3> vertices, recordedNormals;
    if (j==start) { object->begin("", RenderOperation::OT_TRIANGLE_LIST); vertexIndex=0; }
    if (colour.r>=0) object->colour(colour);

	    for (i = 0; i <= slices; i++) {
		switch(qobj->normals) {
		  case GLU_SMOOTH:
		    saveNormal(sinCache2a[i] * sintemp3,
			    cosCache2a[i] * sintemp3,
			    costemp3);
		    break;
		  case GLU_FLAT:
		  case GLU_NONE:
		  default:
		    break;
		}
		if (qobj->orientation == GLU_OUTSIDE) {
		    if (qobj->textureCoords) {
			glTexCoord2f(1 - (float) i / slices,
				1 - (float) (j+1) / stacks);
		    }
		    stripVertex(sintemp2 * sinCache1a[i],
			    sintemp2 * cosCache1a[i], zHigh);
		} else {
		    if (qobj->textureCoords) {
			glTexCoord2f(1 - (float) i / slices,
				1 - (float) j / stacks);
		    }
		    stripVertex(sintemp1 * sinCache1a[i],
			    sintemp1 * cosCache1a[i], zLow);
		}
		switch(qobj->normals) {
		  case GLU_SMOOTH:
		    saveNormal(sinCache2a[i] * sintemp4,
			    cosCache2a[i] * sintemp4,
			    costemp4);
		    break;
		  case GLU_FLAT:
		    saveNormal(sinCache3a[i] * sintemp4,
			    cosCache3a[i] * sintemp4,
			    costemp4);
		    break;
		  case GLU_NONE:
		  default:
		    break;
		}
		if (qobj->orientation == GLU_OUTSIDE) {
		    if (qobj->textureCoords) {
			glTexCoord2f(1 - (float) i / slices,
				1 - (float) j / stacks);
		    }
		    stripVertex(sintemp1 * sinCache1a[i],
			    sintemp1 * cosCache1a[i], zLow);
		} else {
		    if (qobj->textureCoords) {
			glTexCoord2f(1 - (float) i / slices,
				1 - (float) (j+1) / stacks);
		    }
		    stripVertex(sintemp2 * sinCache1a[i],
			    sintemp2 * cosCache1a[i], zHigh);
		}
	    }
	    if (j==finish-1) object->end(); }

	}
	break;
      case GLU_POINT:
	glBegin(GL_POINTS);
	for (j = 0; j <= stacks; j++) {
	    sintemp1 = sinCache1b[j];
	    costemp1 = cosCache1b[j];
	    switch(qobj->normals) {
	      case GLU_FLAT:
	      case GLU_SMOOTH:
		sintemp2 = sinCache2b[j];
		costemp2 = cosCache2b[j];
		break;
	      default:
		break;
	    }
	    for (i = 0; i < slices; i++) {
glVertex3f(sintemp1 * sinCache1a[i],
			sintemp1 * cosCache1a[i], costemp1);

		switch(qobj->normals) {
		  case GLU_FLAT:
		  case GLU_SMOOTH:
		    glNormal3f(sinCache2a[i] * sintemp2,
			    cosCache2a[i] * sintemp2,
			    costemp2);
		    break;
		  case GLU_NONE:
		  default:
		    break;
		}

		zLow = j * radius / stacks;

		if (qobj->textureCoords) {
		    glTexCoord2f(1 - (float) i / slices,
			    1 - (float) j / stacks);
		}
	    }
	}
	glEnd();
	break;
      case GLU_LINE:
      case GLU_SILHOUETTE:
	for (j = 1; j < stacks; j++) {
	    sintemp1 = sinCache1b[j];
	    costemp1 = cosCache1b[j];
	    switch(qobj->normals) {
	      case GLU_FLAT:
	      case GLU_SMOOTH:
		sintemp2 = sinCache2b[j];
		costemp2 = cosCache2b[j];
		break;
	      default:
		break;
	    }

	    glBegin(GL_LINE_STRIP);
	    for (i = 0; i <= slices; i++) {
glVertex3f(sintemp1 * sinCache1a[i],
			sintemp1 * cosCache1a[i], costemp1);

		switch(qobj->normals) {
		  case GLU_FLAT:
		    glNormal3f(sinCache3a[i] * sintemp2,
			    cosCache3a[i] * sintemp2,
			    costemp2);
		    break;
		  case GLU_SMOOTH:
		    glNormal3f(sinCache2a[i] * sintemp2,
			    cosCache2a[i] * sintemp2,
			    costemp2);
		    break;
		  case GLU_NONE:
		  default:
		    break;
		}
		if (qobj->textureCoords) {
		    glTexCoord2f(1 - (float) i / slices,
			    1 - (float) j / stacks);
		}
	    }
	    glEnd();
	}
	for (i = 0; i < slices; i++) {
	    sintemp1 = sinCache1a[i];
	    costemp1 = cosCache1a[i];
	    switch(qobj->normals) {
	      case GLU_FLAT:
	      case GLU_SMOOTH:
		sintemp2 = sinCache2a[i];
		costemp2 = cosCache2a[i];
		break;
	      default:
		break;
	    }

	    glBegin(GL_LINE_STRIP);
	    for (j = 0; j <= stacks; j++) {
glVertex3f(sintemp1 * sinCache1b[j],
			costemp1 * sinCache1b[j], cosCache1b[j]);

		switch(qobj->normals) {
		  case GLU_FLAT:
		    glNormal3f(sintemp2 * sinCache3b[j],
			    costemp2 * sinCache3b[j],
			    cosCache3b[j]);
		    break;
		  case GLU_SMOOTH:
		    glNormal3f(sintemp2 * sinCache2b[j],
			    costemp2 * sinCache2b[j],
			    cosCache2b[j]);
		    break;
		  case GLU_NONE:
		  default:
		    break;
		}

		if (qobj->textureCoords) {
		    glTexCoord2f(1 - (float) i / slices,
			    1 - (float) j / stacks);
		}
	    }
	    glEnd();
	}
	break;
      default:
	break;
    }

    return object;
}

#undef sinCache1a
#undef cosCache1a
#undef cosCache2a
#undef sinCache2a
#undef sinCache1b
#undef cosCache2b
#undef sinCache2b
#undef cosCache1b
#undef sinCache3a
#undef cosCache3a
#undef sinCache3b
#undef cosCache3b
