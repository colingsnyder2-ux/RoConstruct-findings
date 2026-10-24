// from server: 87% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <math.h>
#include <limits>
#include <stddef.h>
namespace G3D {
class Vector3 {public:float x,y,z;
 Vector3():x(0.0f),y(0.0f),z(0.0f){}Vector3(float X,float Y,float Z):x(X),y(Y),z(Z){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 float&operator[](int i){return ((float*)this)[i];}const float&operator[](int i)const{return ((const float*)this)[i];}
 Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}
 Vector3 operator*(const Vector3&v)const{return Vector3(x*v.x,y*v.y,z*v.z);}
 Vector3 operator-()const{return Vector3(-x,-y,-z);}
 float dot(const Vector3&v)const{return x*v.x+y*v.y+z*v.z;}
 Vector3 cross(const Vector3&v)const{return Vector3(y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x);}
 float unitize(float tolerance=1e-6f);
};
class Matrix3 {public:float elt[3][3];Vector3 getColumn(int)const;};
inline Vector3 operator*(const Vector3&v,const Matrix3&m) {
 Vector3 result;
 result.x=v.x*m.elt[0][0]+v.y*m.elt[1][0]+v.z*m.elt[2][0];
 result.y=v.x*m.elt[0][1]+v.y*m.elt[1][1]+v.z*m.elt[2][1];
 result.z=v.x*m.elt[0][2]+v.y*m.elt[1][2]+v.z*m.elt[2][2];
 return result;
}
class CoordinateFrame {public:Matrix3 rotation;Vector3 translation;};
}
namespace RBX {
// Observed native32-bit diagnostics at97b88c/97b888;original symbol names unknown.
extern unsigned int nativeBlockPlanePassed,nativeBlockPlaneRejected;
enum NormalId {NORM_X,NORM_Y,NORM_Z,NORM_X_NEG,NORM_Y_NEG,NORM_Z_NEG};
class Math {public:
 static const float&inf(){static float inf=std::numeric_limits<float>::infinity();return inf;}
 static float taxiCabMagnitude(const G3D::Vector3&v){return fabs(v.x)+fabs(v.y)+fabs(v.z);}
};
class Geometry;
class Block {public:char unobserved00[0x10];const G3D::Vector3*vertices;
public:const float*getVertices()const{return (const float*)vertices;}
 int getClosestEdge(const G3D::Matrix3&,NormalId,G3D::Vector3&);
};
// PV andBody views include only the observed world-position prefix.
class PV {public:G3D::CoordinateFrame position;};
// The client directly reads the current PV prefix. This observed accessor is
// deliberately separate from the available SDK getPV(), which calls updatePV().
class Body {public:char unobserved00[0x94];PV pv;const PV&observedPV()const{return pv;}};
class Primitive {public:char unobserved00[0x9c];Geometry*geometry;Body*body;
 Geometry*getGeometry(){return geometry;}const Geometry*getGeometry()const{return geometry;}
 Body*getBody(){return body;}const Body*getBody()const{return body;}
};
class BlockBlockContact {public:
 char unobserved00[0x0c];Primitive*prims[2];char unobserved14[0x58-0x14];
 int separatingBodyId;bool planeContact;char unobserved5d[3];int separatingAxisId;int feature[2];
 Primitive*getPrimitive(int i)const{return prims[i];}Block*block(int i){return reinterpret_cast<Block*>(prims[i]->getGeometry());}
 bool getBestPlaneEdge(float overlapIgnored);
};
typedef char block_body_offset[offsetof(BlockBlockContact,separatingBodyId)==0x58?1:-1];
typedef char block_plane_contact_offset[offsetof(BlockBlockContact,planeContact)==0x5c?1:-1];
typedef char block_axis_offset[offsetof(BlockBlockContact,separatingAxisId)==0x60?1:-1];
typedef char block_feature_offset[offsetof(BlockBlockContact,feature)==0x64?1:-1];
typedef char frame_size[sizeof(G3D::CoordinateFrame)==48?1:-1];
bool BlockBlockContact::getBestPlaneEdge(float overlapIgnored)
	{
		float bestPlaneLength = Math::inf();
		float bestEdgeLength = Math::inf();
		float lastPlaneLength = Math::inf();
		int lastFeature[2] = {this->feature[0], this->feature[1]};
		bool checkLastFeature = (lastFeature[0] >= 0 && lastFeature[0] < 6) || (lastFeature[1] >= 0 && lastFeature[1] < 6);

		bool belowOverlap = false;

		for (int i = this->separatingBodyId; i < this->separatingBodyId + 2; i++)
		{
			int baseId = i % 2;
			int testId = (i + 1) % 2;

			const G3D::CoordinateFrame& primPV0 = this->getPrimitive(baseId)->getBody()->observedPV().position;
			const G3D::CoordinateFrame& primPV1 = this->getPrimitive(testId)->getBody()->observedPV().position;
			const G3D::Vector3* eBase = (const G3D::Vector3*)this->block(baseId)->getVertices();
			const G3D::Vector3* eTest = (const G3D::Vector3*)this->block(testId)->getVertices();

			G3D::Vector3 delta = primPV1.translation - primPV0.translation;

			G3D::Vector3 rotTransMul = delta * primPV0.rotation;

			for (int j = this->separatingAxisId; j < this->separatingAxisId + 3; j++)
			{
				int axisId = j % 3;

				float what = Math::taxiCabMagnitude(primPV0.rotation.getColumn(axisId) * primPV1.rotation * *eTest) + (*eBase)[axisId] - fabs(rotTransMul[axisId]);

				if (what > overlapIgnored)
				{
					if (checkLastFeature && lastFeature[baseId] % 3 == axisId )
						lastPlaneLength = what;

					if (what < bestPlaneLength)
					{
						bestPlaneLength = what;
						this->feature[baseId] = rotTransMul[axisId] > 0.0f ? axisId : axisId + 3;
						this->feature[testId] = -1;
						this->separatingBodyId = baseId;
						this->separatingAxisId = axisId;
						planeContact = true;
					}
				}
				else
				{
					this->separatingBodyId = baseId;
					this->separatingAxisId = axisId;
                    ++nativeBlockPlaneRejected;
					belowOverlap = true;
				}

				if (belowOverlap)
					return false;
			}
		}

        ++nativeBlockPlanePassed;
		if (checkLastFeature) 
		{
			if (this->feature[0] != lastFeature[0] || this->feature[1] != lastFeature[1]) 
			{
				if (!(bestPlaneLength * 1.01f < lastPlaneLength))
				{
					bestPlaneLength = lastPlaneLength;
					this->feature[0] = lastFeature[0];
					this->feature[1] = lastFeature[1];
				}
			}
		}
		const G3D::CoordinateFrame& primPV0 = this->getPrimitive(0)->getBody()->observedPV().position;
		const G3D::CoordinateFrame& primPV1 = this->getPrimitive(1)->getBody()->observedPV().position;
		const G3D::Vector3* e0 = (const G3D::Vector3*)this->block(0)->getVertices();
		const G3D::Vector3* e1 = (const G3D::Vector3*)this->block(1)->getVertices();

		G3D::Vector3 p0p1 = primPV1.translation - primPV0.translation;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				G3D::Vector3 crossAxis = primPV0.rotation.getColumn(i).cross(primPV1.rotation.getColumn(j));
				if (crossAxis.unitize() <= 0.001f)
					return planeContact;

				float p0p1inCrossAxis = crossAxis.dot(p0p1);

				G3D::Vector3 crossAxisMulPV0rot = crossAxis * primPV0.rotation;
				G3D::Vector3 crossAxisMulPV1rot = crossAxis * primPV1.rotation;

				float what = Math::taxiCabMagnitude(crossAxisMulPV0rot * *e0) + Math::taxiCabMagnitude(crossAxisMulPV1rot * *e1) - fabs(p0p1inCrossAxis);
				if (what > overlapIgnored)
				{
					if (what < bestEdgeLength)
					{
						bestEdgeLength = what;

						if ( what * 10.0 < bestPlaneLength )
						{
							if ( p0p1inCrossAxis > 0.0 )
							{
								this->feature[0] = this->block(0)->getClosestEdge(primPV0.rotation, (NormalId)i, crossAxis) + 6;
								this->feature[1] = this->block(1)->getClosestEdge(primPV1.rotation, (NormalId)j, -crossAxis) + 6;
							}
							else
							{
								this->feature[0] = this->block(0)->getClosestEdge(primPV0.rotation, (NormalId)i, -crossAxis) + 6;
								this->feature[1] = this->block(1)->getClosestEdge(primPV1.rotation, (NormalId)j, crossAxis) + 6;
							}
							planeContact = false;
						}
					}
				}
				else
				{
					 return false;
				}
			}
		}
		return true;
	}
}

namespace RBX {
typedef char native_body_pv_offset[offsetof(Body,pv)==0x94?1:-1];
typedef char native_primitive_geometry_offset[offsetof(Primitive,geometry)==0x9c?1:-1];
typedef char native_primitive_body_offset[offsetof(Primitive,body)==0xa0?1:-1];
typedef char native_block_vertices_offset[offsetof(Block,vertices)==0x10?1:-1];
}
