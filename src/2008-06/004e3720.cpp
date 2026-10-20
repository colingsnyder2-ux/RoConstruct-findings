// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lang: cpp
// roc-lib: rbxgs-dll roc_mesh_build_8a4e418739eedc87.cpp

// Candidate translation unit (score above; library headers required).
// Binary-derived level population. This is a codegen analogue, not an original declaration.
#include <RenderLib/Mesh.h>
#include <util/NormalId.h>
#include <v8datamodel/BrickColor.h>
#include <G3D/Vector4.h>
#include <algorithm>
using namespace G3D;
typedef RBX::Render::Mesh Mesh;
typedef ReferenceCountedPointer<Mesh::Level> LevelRef;

// 004dd2e0 initializes the native 40-byte Level. The older authentic header
// describes its first 28 bytes; byte 1c and words 20/24 are observed extra storage.
// Their original names/meaning are unknown. Constructor/destructor remain native.
class Level2008 : public Mesh::Level {
    bool state;
    int slot;
    unsigned count;
public:
    Level2008(RenderDevice::Primitive);
    virtual ~Level2008();
};
typedef char LevelSizeProof[sizeof(Level2008)==0x28?1:-1];
extern float meshBevel;
extern Array<Vector3> meshPositions;
extern Array<Vector3> meshNormals;
extern Array<Vector2> meshTextures;
template<RBX::NormalId id>
void recoveredMeshFace(const Vector3&,float,unsigned,float,LevelRef&,unsigned*);
extern void __stdcall cloneMeshQuad(LevelRef&,unsigned,unsigned,unsigned,unsigned,unsigned*);

static __forceinline void atlasFace(unsigned* corners,const Vector4& rectangle,unsigned flags,float margin) {
    Vector2 border(rectangle.z*6.0f,rectangle.w*6.0f);
    border*=margin;
    Vector2 a(rectangle.x+border.x,rectangle.y+border.y);
    Vector2 b(rectangle.x+rectangle.z-border.x,rectangle.y+border.y);
    Vector2 c(rectangle.x+rectangle.z-border.x,rectangle.y+rectangle.w-border.y);
    Vector2 d(rectangle.x+border.x,rectangle.y+rectangle.w-border.y);
    if(flags&1) {std::swap(a,b);std::swap(c,d);}
    if(flags&2) {std::swap(a,d);std::swap(b,c);}
    if(flags&4) {Vector2 t=a;a=b;b=c;c=d;d=t;}
    meshTextures[corners[0]]=a;
    meshTextures[corners[1]]=b;
    meshTextures[corners[2]]=c;
    meshTextures[corners[3]]=d;
}
static __forceinline void extendTexture(unsigned destination,unsigned base,unsigned other,float margin) {
    Vector2 direction=meshTextures[base]-meshTextures[other];
    direction.unitize(1e-6f);
    meshTextures[destination]=meshTextures[base]+direction*(margin*(2.0f/3.0f));
}
class BrickMeshRecovery {
public:
    void populate(const Vector3&,unsigned,RBX::BrickColor,const unsigned*,const Vector4*,const unsigned*,float);
    template<class T> T& field(unsigned offset) {return *reinterpret_cast<T*>(reinterpret_cast<char*>(this)+offset);}
};
void BrickMeshRecovery::populate(const Vector3& size,unsigned surfaces,RBX::BrickColor color,
                               const unsigned* atlasIndices,const Vector4* rectangles,const unsigned* flags,float margin) {
    LevelRef level=new Level2008(RenderDevice::QUADS);
    field<Array<LevelRef> >(0xc).append(level);
    Vector3 half=size*0.5f;
    float palette=static_cast<float>(color.getClosestPaletteIndex());
    unsigned face[24];
    recoveredMeshFace<RBX::NORM_X>(half,meshBevel,surfaces,palette,level,face);
    atlasFace(face,rectangles[atlasIndices[3]],flags[3],margin);
    recoveredMeshFace<RBX::NORM_Y>(half,meshBevel,surfaces,palette,level,face+4);
    atlasFace(face+4,rectangles[atlasIndices[4]],flags[4],margin);
    recoveredMeshFace<RBX::NORM_Z>(half,meshBevel,surfaces,palette,level,face+8);
    atlasFace(face+8,rectangles[atlasIndices[0]],flags[0],margin);
    recoveredMeshFace<RBX::NORM_X_NEG>(half,meshBevel,surfaces,palette,level,face+12);
    atlasFace(face+12,rectangles[atlasIndices[2]],flags[2],margin);
    recoveredMeshFace<RBX::NORM_Y_NEG>(half,meshBevel,surfaces,palette,level,face+16);
    atlasFace(face+16,rectangles[atlasIndices[5]],flags[5],margin);
    recoveredMeshFace<RBX::NORM_Z_NEG>(half,meshBevel,surfaces,palette,level,face+20);
    atlasFace(face+20,rectangles[atlasIndices[1]],flags[1],margin);
    if(meshBevel>0) {
        unsigned copies[24];
        for(unsigned i=0;i<24;++i)
            copies[i]=Mesh::allocVertex(meshPositions[face[i]],meshNormals[face[i]],meshTextures[face[i]],true);
        // UV extrapolation and join topology follow the native geometry API trace.
        extendTexture(copies[3],copies[7],copies[6],margin);
        extendTexture(copies[2],copies[4],copies[5],margin);
        extendTexture(copies[23],copies[4],copies[7],margin);
        extendTexture(copies[22],copies[5],copies[6],margin);
        extendTexture(copies[15],copies[5],copies[4],margin);
        extendTexture(copies[14],copies[6],copies[7],margin);
        extendTexture(copies[11],copies[6],copies[5],margin);
        extendTexture(copies[10],copies[7],copies[4],margin);
        extendTexture(copies[1],copies[17],copies[16],margin);
        extendTexture(copies[0],copies[18],copies[19],margin);
        extendTexture(copies[9],copies[18],copies[17],margin);
        extendTexture(copies[8],copies[19],copies[16],margin);
        extendTexture(copies[13],copies[19],copies[18],margin);
        extendTexture(copies[12],copies[16],copies[17],margin);
        extendTexture(copies[21],copies[16],copies[19],margin);
        extendTexture(copies[20],copies[17],copies[18],margin);
        level->indexArray.append(copies[3],copies[2],copies[4],copies[7]);
        level->indexArray.append(copies[11],copies[10],copies[7],copies[6]);
        level->indexArray.append(copies[6],copies[5],copies[15],copies[14]);
        level->indexArray.append(copies[5],copies[4],copies[23],copies[22]);
        unsigned quad[4];
        cloneMeshQuad(level,face[10],face[9],face[0],face[3],quad);
        extendTexture(quad[3],face[10],face[11],margin);
        extendTexture(quad[2],face[9],face[8],margin);
        cloneMeshQuad(level,face[2],face[1],face[20],face[23],quad);
        extendTexture(quad[3],face[2],face[3],margin);
        extendTexture(quad[2],face[1],face[0],margin);
        cloneMeshQuad(level,face[22],face[21],face[12],face[15],quad);
        extendTexture(quad[3],face[22],face[23],margin);
        extendTexture(quad[2],face[21],face[20],margin);
        cloneMeshQuad(level,face[14],face[13],face[8],face[11],quad);
        extendTexture(quad[3],face[14],face[15],margin);
        extendTexture(quad[2],face[13],face[12],margin);
        level->indexArray.append(copies[17],copies[16],copies[21],copies[20]);
        level->indexArray.append(copies[13],copies[12],copies[16],copies[19]);
        level->indexArray.append(copies[9],copies[8],copies[19],copies[18]);
        level->indexArray.append(copies[1],copies[0],copies[18],copies[17]);
        level->indexArray.append(copies[7],copies[10],copies[3],copies[3]);
        level->indexArray.append(copies[4],copies[2],copies[23],copies[23]);
        level->indexArray.append(copies[5],copies[22],copies[15],copies[15]);
        level->indexArray.append(copies[11],copies[6],copies[14],copies[14]);
        level->indexArray.append(copies[16],copies[12],copies[21],copies[21]);
        level->indexArray.append(copies[13],copies[19],copies[8],copies[8]);
        level->indexArray.append(copies[0],copies[9],copies[18],copies[18]);
        level->indexArray.append(copies[17],copies[20],copies[1],copies[1]);
        // Each retained join index gains one reference; release the 24 temporary clones.
        Mesh::allocVertex(copies[3],1);
        Mesh::allocVertex(copies[2],1);
        Mesh::allocVertex(copies[4],1);
        Mesh::allocVertex(copies[7],1);
        Mesh::allocVertex(copies[11],1);
        Mesh::allocVertex(copies[10],1);
        Mesh::allocVertex(copies[7],1);
        Mesh::allocVertex(copies[6],1);
        Mesh::allocVertex(copies[6],1);
        Mesh::allocVertex(copies[5],1);
        Mesh::allocVertex(copies[15],1);
        Mesh::allocVertex(copies[14],1);
        Mesh::allocVertex(copies[5],1);
        Mesh::allocVertex(copies[4],1);
        Mesh::allocVertex(copies[23],1);
        Mesh::allocVertex(copies[22],1);
        Mesh::allocVertex(copies[17],1);
        Mesh::allocVertex(copies[16],1);
        Mesh::allocVertex(copies[21],1);
        Mesh::allocVertex(copies[20],1);
        Mesh::allocVertex(copies[13],1);
        Mesh::allocVertex(copies[12],1);
        Mesh::allocVertex(copies[16],1);
        Mesh::allocVertex(copies[19],1);
        Mesh::allocVertex(copies[9],1);
        Mesh::allocVertex(copies[8],1);
        Mesh::allocVertex(copies[19],1);
        Mesh::allocVertex(copies[18],1);
        Mesh::allocVertex(copies[1],1);
        Mesh::allocVertex(copies[0],1);
        Mesh::allocVertex(copies[18],1);
        Mesh::allocVertex(copies[17],1);
        Mesh::allocVertex(copies[7],1);
        Mesh::allocVertex(copies[10],1);
        Mesh::allocVertex(copies[3],1);
        Mesh::allocVertex(copies[3],1);
        Mesh::allocVertex(copies[4],1);
        Mesh::allocVertex(copies[2],1);
        Mesh::allocVertex(copies[23],1);
        Mesh::allocVertex(copies[23],1);
        Mesh::allocVertex(copies[5],1);
        Mesh::allocVertex(copies[22],1);
        Mesh::allocVertex(copies[15],1);
        Mesh::allocVertex(copies[15],1);
        Mesh::allocVertex(copies[11],1);
        Mesh::allocVertex(copies[6],1);
        Mesh::allocVertex(copies[14],1);
        Mesh::allocVertex(copies[14],1);
        Mesh::allocVertex(copies[16],1);
        Mesh::allocVertex(copies[12],1);
        Mesh::allocVertex(copies[21],1);
        Mesh::allocVertex(copies[21],1);
        Mesh::allocVertex(copies[13],1);
        Mesh::allocVertex(copies[19],1);
        Mesh::allocVertex(copies[8],1);
        Mesh::allocVertex(copies[8],1);
        Mesh::allocVertex(copies[0],1);
        Mesh::allocVertex(copies[9],1);
        Mesh::allocVertex(copies[18],1);
        Mesh::allocVertex(copies[18],1);
        Mesh::allocVertex(copies[17],1);
        Mesh::allocVertex(copies[20],1);
        Mesh::allocVertex(copies[1],1);
        Mesh::allocVertex(copies[1],1);
        for(unsigned i=0;i<24;++i) Mesh::allocVertex(copies[i],static_cast<unsigned>(-1));
    }
}
