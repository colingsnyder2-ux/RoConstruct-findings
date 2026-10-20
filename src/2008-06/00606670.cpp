// from server: 98% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_normalbreakreferencea1ef7afc56bc0a41.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off)
#include <G3D/CoordinateFrame.h>
#include <G3D/Vector3.h>
#include "util/Math.h"
struct Body {char pad[0x94];G3D::CoordinateFrame frame;void update();const G3D::CoordinateFrame& getFrame(){update();return frame;}};
struct Point {char pad[12];Body* body;G3D::Vector3 local,world,force;};
struct Connector {char pad[8];Point* point0;Point* point1;float k,threshold;bool broken;RBX::NormalId normal;
void compute(float,bool);};
void Connector::compute(float,bool){if(!broken){
 const G3D::CoordinateFrame& frame=point0->body->getFrame();
 const G3D::Vector3& n=RBX::Math::getWorldNormal(normal,frame);
 const G3D::Vector3& f=-k*(point1->world-point0->world);
 float dot=f.dot(n);broken=-dot>threshold;
 point0->force+=-f;point1->force+=f;
}}
