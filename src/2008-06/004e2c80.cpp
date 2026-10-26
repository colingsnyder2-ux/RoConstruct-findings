// from server: 59% by colin
// from server: 58% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_mutsearch_004e2c80_52e215dfee53fd4d.cpp

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
extern const Vector2 flatTextureOrigin;
template<RBX::NormalId id>
void recoveredMeshFace(const Vector3&,float,unsigned,float,LevelRef&,unsigned*);
extern void __stdcall cloneMeshQuad(LevelRef&,unsigned,unsigned,unsigned,unsigned,unsigned*);

// Plain 004e2c80 sibling: same faces, flat UVs on bevel joins.
class BrickMeshPlainRecovery:public Mesh {public:void populate(const Vector3&,unsigned,RBX::BrickColor);};
void BrickMeshPlainRecovery::populate(const Vector3& size,unsigned surfaces,RBX::BrickColor color) {
 LevelRef level=new Level2008(RenderDevice::QUADS);
 Mesh::Level* nativeLevel=level.getPointer();
 levels.append(level);
 float palette=static_cast<float>(color.getClosestPaletteIndex());
 Vector3 half=size*0.5f;
 unsigned face[24];
 recoveredMeshFace<RBX::NORM_X>(half,meshBevel,surfaces,palette,level,face);
 recoveredMeshFace<RBX::NORM_Y>(half,meshBevel,surfaces,palette,level,face+4);
 recoveredMeshFace<RBX::NORM_Z>(half,meshBevel,surfaces,palette,level,face+8);
 recoveredMeshFace<RBX::NORM_X_NEG>(half,meshBevel,surfaces,palette,level,face+12);
 recoveredMeshFace<RBX::NORM_Y_NEG>(half,meshBevel,surfaces,palette,level,face+16);
 recoveredMeshFace<RBX::NORM_Z_NEG>(half,meshBevel,surfaces,palette,level,face+20);
 if(meshBevel>0) {
  Vector2 uv(flatTextureOrigin.x+palette*(1.0f/32.0f),flatTextureOrigin.y);
  unsigned copies[24];
  for(int i=0;i<24;++i)copies[i]=Mesh::allocVertex(meshPositions[face[i]],meshNormals[face[i]],uv,true);
  nativeLevel->indexArray.append(copies[3],copies[2],copies[4],copies[7]);
  nativeLevel->indexArray.append(copies[11],copies[10],copies[7],copies[6]);
  nativeLevel->indexArray.append(copies[6],copies[5],copies[15],copies[14]);
  nativeLevel->indexArray.append(copies[5],copies[4],copies[23],copies[22]);
  nativeLevel->indexArray.append(copies[10],copies[9],copies[0],copies[3]);
  nativeLevel->indexArray.append(copies[2],copies[1],copies[20],copies[23]);
  nativeLevel->indexArray.append(copies[12],copies[15],copies[22],copies[21]);
  nativeLevel->indexArray.append(copies[14],copies[13],copies[8],copies[11]);
  nativeLevel->indexArray.append(copies[17],copies[16],copies[21],copies[20]);
  nativeLevel->indexArray.append(copies[13],copies[12],copies[16],copies[19]);
  nativeLevel->indexArray.append(copies[9],copies[8],copies[19],copies[18]);
  nativeLevel->indexArray.append(copies[1],copies[0],copies[18],copies[17]);
  nativeLevel->indexArray.append(copies[7],copies[10],copies[3],copies[3]);
  nativeLevel->indexArray.append(copies[4],copies[2],copies[23],copies[23]);
  nativeLevel->indexArray.append(copies[5],copies[22],copies[15],copies[15]);
  nativeLevel->indexArray.append(copies[11],copies[6],copies[14],copies[14]);
  nativeLevel->indexArray.append(copies[16],copies[12],copies[21],copies[21]);
  nativeLevel->indexArray.append(copies[13],copies[19],copies[8],copies[8]);
  nativeLevel->indexArray.append(copies[0],copies[9],copies[18],copies[18]);
  nativeLevel->indexArray.append(copies[17],copies[20],copies[1],copies[1]);
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
  Mesh::allocVertex(copies[10],1);
  Mesh::allocVertex(copies[9],1);
  Mesh::allocVertex(copies[0],1);
  Mesh::allocVertex(copies[3],1);
  Mesh::allocVertex(copies[2],1);
  Mesh::allocVertex(copies[1],1);
  Mesh::allocVertex(copies[20],1);
  Mesh::allocVertex(copies[23],1);
  Mesh::allocVertex(copies[12],1);
  Mesh::allocVertex(copies[15],1);
  Mesh::allocVertex(copies[22],1);
  Mesh::allocVertex(copies[21],1);
  Mesh::allocVertex(copies[14],1);
  Mesh::allocVertex(copies[13],1);
  Mesh::allocVertex(copies[8],1);
  Mesh::allocVertex(copies[11],1);
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
  for(int i=0;i<24;++i)Mesh::allocVertex(copies[i],static_cast<unsigned>(-1));
 }
}
