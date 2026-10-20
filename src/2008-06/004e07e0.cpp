// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lang: cpp
// roc-lib: rbxgs-dll roc_mesh_face_858fda6113cd5a98.cpp

// Candidate translation unit (score above; library headers required).
// Binary-derived meshFace body using authentic G3D/RenderLib declarations.
// Only the Level prefix is accessed; its later native fields are not modeled.
#include <RenderLib/Mesh.h>
#include <util/NormalId.h>
#include <vector>
#include <cstdlib>
#include <cmath>
extern bool buildingShadowMesh;
extern const G3D::Vector2 flatTextureOrigin;
template<RBX::NormalId id>
void recoveredMeshFace(const G3D::Vector3& size,float inset,unsigned surfaces,float color,
                      G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>& level,unsigned* corners) {
    using namespace G3D;
    Vector3 half=RBX::uvwToObject<id>(size);
    half=Vector3(fabs(half.x)-inset,fabs(half.y)-inset,fabs(half.z));
    unsigned surface=(surfaces>>(3*id))&7;
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
    if(!buildingShadowMesh) {
        first.x=rand()*(0.1f/RAND_MAX)-0.05f;
        first.y=rand()*(0.1f/RAND_MAX)-0.05f;
        last.x=rand()*(1.0f/RAND_MAX)>0.5f?first.x:-first.x;
        last.y=rand()*(1.0f/RAND_MAX)>0.5f?first.y:-first.y;
    }
    if(surface==0) {
        unsigned a=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(-half.x,-half.y,half.z)),RBX::uvwToObject<id>(Vector3(first.x,first.y,1)),origin,true);
        unsigned b=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(half.x,-half.y,half.z)),RBX::uvwToObject<id>(Vector3(last.x,first.y,1)),origin,true);
        unsigned c=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(half.x,half.y,half.z)),RBX::uvwToObject<id>(Vector3(last.x,last.y,1)),origin,true);
        unsigned d=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(-half.x,half.y,half.z)),RBX::uvwToObject<id>(Vector3(first.x,last.y,1)),origin,true);
        level->indexArray.append(a,b,c,d);
        corners[0]=a;corners[1]=b;corners[2]=c;corners[3]=d;
        return;
    }
    Vector2 delta=(last-first)*0.5f/half.xy();
    static std::vector<unsigned> indices;
    indices.erase(indices.begin(),indices.end());
    unsigned rows=0,columns=0;
    float normalX=first.x;
    for(float x=-half.x;x<half.x;++rows) {
        float right=G3D::min(x+step.x,half.x);
        float nextNormalX=normalX+delta.x;
        float normalY=first.y;
        columns=0;
        for(float y=-half.y;y<half.y;++columns) {
            float top=G3D::min(y+step.y,half.y);
            float nextNormalY=normalY+delta.y;
            float textureRight=origin.x+(right-x)*(1.0f/64.0f)-1.0f/1024.0f;
            float textureTop=origin.y+(top-y)*(1.0f/12.0f);
            float textureLeft=origin.x+1.0f/1024.0f;
            unsigned a=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(x,y,half.z)),RBX::uvwToObject<id>(Vector3(normalX,normalY,1)),Vector2(textureLeft,textureTop),true);
            unsigned b=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(right,y,half.z)),RBX::uvwToObject<id>(Vector3(nextNormalX,normalY,1)),Vector2(textureRight,textureTop),true);
            unsigned c=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(right,top,half.z)),RBX::uvwToObject<id>(Vector3(nextNormalX,nextNormalY,1)),Vector2(textureRight,origin.y),true);
            unsigned d=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(x,top,half.z)),RBX::uvwToObject<id>(Vector3(normalX,nextNormalY,1)),Vector2(textureLeft,origin.y),true);
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
template void recoveredMeshFace<RBX::NORM_X_NEG>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);
