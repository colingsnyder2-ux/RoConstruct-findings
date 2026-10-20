// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: ogre-1.4.5-dll roc_disk_native_index_f38ffb9ed3e5dd7c.cpp

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

namespace std {
template<> __declspec(noinline) vector<Ogre::Vector3>::reference vector<Ogre::Vector3>::operator[](size_type _Pos)
{	// subscript mutable sequence

 #if _HAS_ITERATOR_DEBUGGING
		if (size() <= _Pos)
			{
			_DEBUG_ERROR("vector subscript out of range");
			_SCL_SECURE_OUT_OF_RANGE;
			}
 #endif /* _HAS_ITERATOR_DEBUGGING */
		_SCL_SECURE_VALIDATE_RANGE(_Pos < size());

		return (*(_Myfirst + _Pos));
		}
}
using namespace Ogre;
typedef int GLint;
typedef float GLfloat;
typedef bool GLboolean;
#define CACHE_SIZE 240
#define PI Math::PI
#define SIN(x) sin(x)
#define COS(x) cos(x)
#define SQRT(x) sqrt(x)
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

#define glBegin(type) do { object->begin("", type); if (colour.r >= 0) object->colour(colour); vertexIndex=0; if(normals<=GLU_FLAT) object->normal(0.0f,0.0f,orientation==GLU_OUTSIDE?1.0f:-1.0f); } while (0)
#define glEnd() object->end()
#define glNormal3f(vx,vy,vz) do { normal=Vector3(vx,vy,vz); object->normal(vx,vy,vz); } while(0)
#define saveNormal(vx,vy,vz) (normal = Vector3(vx,vy,vz))
#define glTexCoord2f(tu,tv) object->textureCoord(tu,tv)
#define glVertex3f(vx,vy,vz) do { object->position(offset.x+(vx),offset.y+(vy),offset.z+(vz)); object->index(vertexIndex++); } while (0)
#define stripVertex(vx,vy,vz) do { \
    int count=vertices.size(); \
    if(count>=2) { \
        if(count%2) { \
            object->position(vertices[count-1]); object->index(vertexIndex++); \
            object->position(vertices[count-2]); object->index(vertexIndex++); \
            object->position(offset.x+(vx),offset.y+(vy),offset.z+(vz)); object->index(vertexIndex++); \
        } else { \
            object->position(vertices[count-2]); object->index(vertexIndex++); \
            object->position(vertices[count-1]); object->index(vertexIndex++); \
            object->position(offset.x+(vx),offset.y+(vy),offset.z+(vz)); object->index(vertexIndex++); \
        } \
    } \
    vertices.push_back(Vector3(vx,vy,vz)); \
} while(0)
class QuadricRecovery {
public:
    int normals;
    bool textureCoords;
    int orientation;
    int drawStyle;
    ColourValue colour;
    Vector3 offset;
    ManualObject* sphere(SceneManager* manager, const String& name, ManualObject* object, Real radius, GLint slices, GLint stacks);
    ManualObject* cylinder(SceneManager*, const String&, ManualObject*, Real, Real, Real, GLint, GLint);
    ManualObject* partialDisk(SceneManager*, const String&, ManualObject*, Real, Real, GLint, GLint, Real, Real);
};
ManualObject* QuadricRecovery::partialDisk(SceneManager* manager,const String& name,ManualObject* object,Real innerRadius,Real outerRadius,GLint slices,GLint loops,Real startAngle,Real sweepAngle)
{
 QuadricRecovery* qobj=this;
 if(!object) object=manager->createManualObject(name);
 Vector3 normal;
 unsigned vertexIndex;

    GLint i,j;
    GLfloat sinCache[CACHE_SIZE];
    GLfloat cosCache[CACHE_SIZE];
    GLfloat angle;
    GLfloat sintemp, costemp;
    GLfloat deltaRadius;
    GLfloat radiusLow, radiusHigh;
    GLfloat texLow = 0.0, texHigh = 0.0;
    GLfloat angleOffset;
    GLint slices2;
    GLint finish;

    if (slices >= CACHE_SIZE) slices = CACHE_SIZE-1;
    if (slices < 2 || loops < 1 || outerRadius <= 0.0 || innerRadius < 0.0 ||
	    innerRadius > outerRadius) {
	
	return 0;
    }

    if (sweepAngle < -360.0) sweepAngle = 360.0;
    if (sweepAngle > 360.0) sweepAngle = 360.0;
    if (sweepAngle < 0) {
	startAngle += sweepAngle;
	sweepAngle = -sweepAngle;
    }

    if (sweepAngle == 360.0) {
	slices2 = slices;
    } else {
	slices2 = slices + 1;
    }

    /* Compute length (needed for normal calculations) */
    deltaRadius = outerRadius - innerRadius;

    /* Cache is the vertex locations cache */

    angleOffset = startAngle / 180.0 * PI;
    for (i = 0; i <= slices; i++) {
	angle = angleOffset + ((PI * sweepAngle) / 180.0) * i / slices;
	sinCache[i] = SIN(angle);
	cosCache[i] = COS(angle);
    }

    if (sweepAngle == 360.0) {
	sinCache[slices] = sinCache[0];
	cosCache[slices] = cosCache[0];
    }

    switch (qobj->drawStyle) {
      case GLU_FILL:
	if (innerRadius == 0.0) {
	    finish = loops - 1;
	    /* Triangle strip for inner polygons */
	    object->begin("", GL_TRIANGLE_FAN); if(colour.r>=0)object->colour(colour); vertexIndex=0;
	    glVertex3f(0.0, 0.0, 0.0); if(normals<=GLU_FLAT) object->normal(0.0f,0.0f,orientation==GLU_OUTSIDE?1.0f:-1.0f);
if (qobj->textureCoords) {
		glTexCoord2f(0.5, 0.5);
	    }
	    radiusLow = outerRadius -
		    deltaRadius * ((float) (loops-1) / loops);
	    if (qobj->textureCoords) {
		texLow = radiusLow / outerRadius / 2;
	    }

	    if (qobj->orientation == GLU_OUTSIDE) {
		for (i = slices; i >= 0; i--) {
		    glVertex3f(radiusLow * sinCache[i],
			    radiusLow * cosCache[i], 0.0);
if (qobj->textureCoords) {
			glTexCoord2f(texLow * sinCache[i] + 0.5,
				texLow * cosCache[i] + 0.5);
		    }
		}
	    } else {
		for (i = 0; i <= slices; i++) {
		    glVertex3f(radiusLow * sinCache[i],
			    radiusLow * cosCache[i], 0.0);
if (qobj->textureCoords) {
			glTexCoord2f(texLow * sinCache[i] + 0.5,
				texLow * cosCache[i] + 0.5);
		    }
		}
	    }
	    glEnd();
	} else {
	    finish = loops;
	}
	for (j = 0; j < finish; j++) {
	    radiusLow = outerRadius - deltaRadius * ((float) j / loops);
	    radiusHigh = outerRadius - deltaRadius * ((float) (j + 1) / loops);
	    if (qobj->textureCoords) {
		texLow = radiusLow / outerRadius / 2;
		texHigh = radiusHigh / outerRadius / 2;
	    }

	    { std::vector<Vector3> vertices;
object->begin("",RenderOperation::OT_TRIANGLE_LIST);vertexIndex=0;
if(colour.r>=0)object->colour(colour); if(normals<=GLU_FLAT) object->normal(0.0f,0.0f,orientation==GLU_OUTSIDE?1.0f:-1.0f);

	    for (i = 0; i <= slices; i++) {
		if (qobj->orientation == GLU_OUTSIDE) {
		    if (qobj->textureCoords) {
			glTexCoord2f(texLow * sinCache[i] + 0.5,
				texLow * cosCache[i] + 0.5);
		    }
		    stripVertex(radiusLow * sinCache[i],
			    radiusLow * cosCache[i], 0.0);

		    if (qobj->textureCoords) {
			glTexCoord2f(texHigh * sinCache[i] + 0.5,
				texHigh * cosCache[i] + 0.5);
		    }
		    stripVertex(radiusHigh * sinCache[i],
			    radiusHigh * cosCache[i], 0.0);
		} else {
		    if (qobj->textureCoords) {
			glTexCoord2f(texHigh * sinCache[i] + 0.5,
				texHigh * cosCache[i] + 0.5);
		    }
		    stripVertex(radiusHigh * sinCache[i],
			    radiusHigh * cosCache[i], 0.0);

		    if (qobj->textureCoords) {
			glTexCoord2f(texLow * sinCache[i] + 0.5,
				texLow * cosCache[i] + 0.5);
		    }
		    stripVertex(radiusLow * sinCache[i],
			    radiusLow * cosCache[i], 0.0);
		}
	    }
	    object->end();}

	}
	break;
      case GLU_POINT:
	glBegin(GL_POINTS);
	for (i = 0; i < slices2; i++) {
	    sintemp = sinCache[i];
	    costemp = cosCache[i];
	    for (j = 0; j <= loops; j++) {
		radiusLow = outerRadius - deltaRadius * ((float) j / loops);

		glVertex3f(radiusLow * sintemp, radiusLow * costemp, 0.0);
if (qobj->textureCoords) {
		    texLow = radiusLow / outerRadius / 2;

		    glTexCoord2f(texLow * sinCache[i] + 0.5,
			    texLow * cosCache[i] + 0.5);
		}
	    }
	}
	glEnd();
	break;
      case GLU_LINE:
	if (innerRadius == outerRadius) {
	    glBegin(GL_LINE_STRIP);

	    for (i = 0; i <= slices; i++) {
		glVertex3f(innerRadius * sinCache[i],
			innerRadius * cosCache[i], 0.0);
if (qobj->textureCoords) {
		    glTexCoord2f(sinCache[i] / 2 + 0.5,
			    cosCache[i] / 2 + 0.5);
		}
	    }
	    glEnd();
	    break;
	}
	for (j = 0; j <= loops; j++) {
	    radiusLow = outerRadius - deltaRadius * ((float) j / loops);
	    if (qobj->textureCoords) {
		texLow = radiusLow / outerRadius / 2;
	    }

	    glBegin(GL_LINE_STRIP);
	    for (i = 0; i <= slices; i++) {
		glVertex3f(radiusLow * sinCache[i],
			radiusLow * cosCache[i], 0.0);
if (qobj->textureCoords) {
		    glTexCoord2f(texLow * sinCache[i] + 0.5,
			    texLow * cosCache[i] + 0.5);
		}
	    }
	    glEnd();
	}
	for (i=0; i < slices2; i++) {
	    sintemp = sinCache[i];
	    costemp = cosCache[i];
	    glBegin(GL_LINE_STRIP);
	    for (j = 0; j <= loops; j++) {
		radiusLow = outerRadius - deltaRadius * ((float) j / loops);
		if (qobj->textureCoords) {
		    texLow = radiusLow / outerRadius / 2;
		}

		glVertex3f(radiusLow * sintemp, radiusLow * costemp, 0.0);
if (qobj->textureCoords) {
		    glTexCoord2f(texLow * sinCache[i] + 0.5,
			    texLow * cosCache[i] + 0.5);
		}
	    }
	    glEnd();
	}
	break;
      case GLU_SILHOUETTE:
	if (sweepAngle < 360.0) {
	    for (i = 0; i <= slices; i+= slices) {
		sintemp = sinCache[i];
		costemp = cosCache[i];
		glBegin(GL_LINE_STRIP);
		for (j = 0; j <= loops; j++) {
		    radiusLow = outerRadius - deltaRadius * ((float) j / loops);

		    glVertex3f(radiusLow * sintemp, radiusLow * costemp, 0.0);
if (qobj->textureCoords) {
			texLow = radiusLow / outerRadius / 2;
			glTexCoord2f(texLow * sinCache[i] + 0.5,
				texLow * cosCache[i] + 0.5);
		    }
		}
		glEnd();
	    }
	}
	for (j = 0; j <= loops; j += loops) {
	    radiusLow = outerRadius - deltaRadius * ((float) j / loops);
	    if (qobj->textureCoords) {
		texLow = radiusLow / outerRadius / 2;
	    }

	    glBegin(GL_LINE_STRIP);
	    for (i = 0; i <= slices; i++) {
		glVertex3f(radiusLow * sinCache[i],
			radiusLow * cosCache[i], 0.0);
if (qobj->textureCoords) {
		    glTexCoord2f(texLow * sinCache[i] + 0.5,
			    texLow * cosCache[i] + 0.5);
		}
	    }
	    glEnd();
	    if (innerRadius == outerRadius) break;
	}
	break;
      default:
	break;
    }

return object;
}
