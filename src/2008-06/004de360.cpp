// from server: 81% by coldek
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-view-dll roc_claude_meshface_f8d85df25fc8cd77.cpp

// Candidate translation unit (score above; library headers required).
// meshFace<NormalId> face builder (2008 shape with corners out-param) rebuilt inside the authentic BrickMesh.cpp TU;
// six explicit instantiations cover 004de360/004def80/004dfbb0/004e07e0/004e1410/004e2040. Partial (81-82%).
#include "BrickMesh.cpp"
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
extern bool buildingShadowMesh;
extern const G3D::Vector2 flatTextureOrigin;
template<RBX::NormalId id>
void recoveredMeshFace(const G3D::Vector3& size,float inset,unsigned surfaces,float color,
                      G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>& level,unsigned* corners) {
    using namespace G3D;
    unsigned surface=(surfaces>>(3*id))&7;
    const Vector3&mapped=RBX::uvwToObject<id>(size);
    Vector3 half;
    half=Vector3(fabs(mapped.x)-inset,fabs(mapped.y)-inset,fabs(mapped.z));
    Vector2 step(0,0),origin(0,0);
    switch(surface) {
    case 0: origin=flatTextureOrigin;step=half.xy()*2.0f;break;
    case 1: step=Vector2(2,4);break;
    case 2: step=Vector2(2,4);origin.y=1.0f/3.0f;break;
    case 3: step=Vector2(2,2);origin.y=2.0f/3.0f;break;
    case 4: step=Vector2(2,2);origin.y=5.0f/6.0f;break;
    }
    origin.x+=color*(1.0f/32.0f);
    static Vector2 first(0,0);
    static Vector2 last(0,0);
    Vector2 faceFirst,faceLast;
    if(!buildingShadowMesh) {
        faceFirst.x=rand()*(0.1f/32767)-0.05f;
        faceFirst.y=rand()*(0.1f/32767)-0.05f;
        faceLast.x=rand()*(1.0f/32767)>0.5f?faceFirst.x:-faceFirst.x;
        faceLast.y=rand()*(1.0f/32767)>0.5f?faceFirst.y:-faceFirst.y;
        first=faceFirst;last=faceLast;
    } else {
        faceFirst=first;faceLast=last;
    }
    if(surface==0) {
        Vector3 n3(faceFirst.x,faceLast.y,1),n0(faceFirst.x,faceFirst.y,1),n1(faceLast.x,faceFirst.y,1),n2(faceLast.x,faceLast.y,1);
        unsigned a;
        {
            Vector3 tn=RBX::uvwToObject<id>(n0);
            Vector3 tp=RBX::uvwToObject<id>(Vector3(-half.x,-half.y,half.z));
            a=RBX::Render::Mesh::allocVertex(tp,tn,origin,true);
        }
        unsigned b;
        {
            Vector3 tn=RBX::uvwToObject<id>(n1);
            Vector3 tp=RBX::uvwToObject<id>(Vector3(half.x,-half.y,half.z));
            b=RBX::Render::Mesh::allocVertex(tp,tn,origin,true);
        }
        unsigned c;
        {
            Vector3 tn=RBX::uvwToObject<id>(n2);
            Vector3 tp=RBX::uvwToObject<id>(Vector3(half.x,half.y,half.z));
            c=RBX::Render::Mesh::allocVertex(tp,tn,origin,true);
        }
        unsigned d;
        {
            Vector3 tn=RBX::uvwToObject<id>(n3);
            Vector3 tp=RBX::uvwToObject<id>(Vector3(-half.x,half.y,half.z));
            d=RBX::Render::Mesh::allocVertex(tp,tn,origin,true);
        }
        level->indexArray.append(a,b,c,d);
        corners[0]=a;corners[1]=b;corners[2]=c;corners[3]=d;
        return;
    }
    float x=-half.x;
    unsigned rows=0;
    Vector2 delta=(faceLast-faceFirst)*0.5f/half.xy();
    float normalX=faceFirst.x;
    static std::vector<int> indices;
    indices.erase(indices.begin(),indices.end());
    unsigned columns;
    for(;x<half.x;++rows) {
        float right=std::min(x+step.x,half.x);
        float normalY=faceFirst.y;
        columns=0;
        float nextNormalX=normalX+delta.x;
        float y=-half.y;
        for(;y<half.y;++columns) {
            float top=std::min(y+step.y,half.y);
            float nextNormalY=normalY+delta.y;
            Vector2 t0(origin.x+1.0f/1024.0f,origin.y+(top-y)*(1.0f/12.0f));
            Vector2 t1(origin.x-1.0f/1024.0f+(right-x)*(1.0f/64.0f),origin.y+(top-y)*(1.0f/12.0f));
            Vector2 t2(origin.x-1.0f/1024.0f+(right-x)*(1.0f/64.0f),origin.y);
            Vector2 t3(origin.x+1.0f/1024.0f,origin.y);
            Vector3 tn0=RBX::uvwToObject<id>(Vector3(normalX,normalY,1));
            Vector3 tp0=RBX::uvwToObject<id>(Vector3(x,y,half.z));
            unsigned a=RBX::Render::Mesh::allocVertex(tp0,tn0,t0,true);
            Vector3 tn1=RBX::uvwToObject<id>(Vector3(nextNormalX,normalY,1));
            Vector3 tp1=RBX::uvwToObject<id>(Vector3(right,y,half.z));
            unsigned b=RBX::Render::Mesh::allocVertex(tp1,tn1,t1,true);
            Vector3 tn2=RBX::uvwToObject<id>(Vector3(nextNormalX,nextNormalY,1));
            Vector3 tp2=RBX::uvwToObject<id>(Vector3(right,top,half.z));
            unsigned c=RBX::Render::Mesh::allocVertex(tp2,tn2,t2,true);
            Vector3 tn3=RBX::uvwToObject<id>(Vector3(normalX,nextNormalY,1));
            Vector3 tp3=RBX::uvwToObject<id>(Vector3(x,top,half.z));
            unsigned d=RBX::Render::Mesh::allocVertex(tp3,tn3,t3,true);
            indices.push_back(a);indices.push_back(b);indices.push_back(c);indices.push_back(d);
            level->indexArray.append(a,b,c,d);
            y=top;normalY=nextNormalY;
        }
        x=right;normalX=nextNormalX;
    }
    corners[0]=indices[0];
    corners[1]=indices[(rows-1)*columns*4+1];
    corners[2]=indices[rows*columns*4-2];
    corners[3]=indices[columns*4-1];
}
template void recoveredMeshFace<RBX::NORM_X>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);
template void recoveredMeshFace<RBX::NORM_Y>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);
template void recoveredMeshFace<RBX::NORM_Z>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);
template void recoveredMeshFace<RBX::NORM_X_NEG>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);
template void recoveredMeshFace<RBX::NORM_Y_NEG>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);
template void recoveredMeshFace<RBX::NORM_Z_NEG>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);
