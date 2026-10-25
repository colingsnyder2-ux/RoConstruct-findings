// from server: 77% by Espeon
// roc 2008-06 0065a220  unit: RBX::BallBallContact  size: 695 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065a220
//
// 0065a220  83ec28               sub esp, 0x28
// 0065a223  53                   push ebx
// 0065a224  55                   push ebp
// 0065a225  56                   push esi
// 0065a226  57                   push edi
// 0065a227  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0065a22b  8b7708               mov esi, dword ptr [edi + 8]
// 0065a22e  8b4704               mov eax, dword ptr [edi + 4]
// 0065a231  69f6b7fff904         imul esi, esi, 0x4f9ffb7
// 0065a237  8bd9                 mov ebx, ecx
// 0065a239  69c09f402701         imul eax, eax, 0x127409f
// 0065a23f  8b0f                 mov ecx, dword ptr [edi]
// 0065a241  ff4378               inc dword ptr [ebx + 0x78]
// 0065a244  69c95df46604         imul ecx, ecx, 0x466f45d
// 0065a24a  33f0                 xor esi, eax
// 0065a24c  33f1                 xor esi, ecx
// 0065a24e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0065a252  baffff0000           mov edx, 0xffff
// 0065a257  d3fa                 sar edx, cl
// 0065a259  57                   push edi
// 0065a25a  895c2418             mov dword ptr [esp + 0x18], ebx
// 0065a25e  23f2                 and esi, edx
// 0065a260  56                   push esi
// 0065a261  51                   push ecx
// 0065a262  8bcb                 mov ecx, ebx
// 0065a264  e827fdffff           call 0x659f90
// 0065a269  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0065a26d  8be8                 mov ebp, eax
// 0065a26f  894d00               mov dword ptr [ebp], ecx
// 0065a272  8b07                 mov eax, dword ptr [edi]
// 0065a274  894514               mov dword ptr [ebp + 0x14], eax
// 0065a277  8b5704               mov edx, dword ptr [edi + 4]
// 0065a27a  895518               mov dword ptr [ebp + 0x18], edx
// 0065a27d  8b4708               mov eax, dword ptr [edi + 8]
// 0065a280  89451c               mov dword ptr [ebp + 0x1c], eax
// 0065a283  897510               mov dword ptr [ebp + 0x10], esi
// 0065a286  8b4164               mov eax, dword ptr [ecx + 0x64]
// 0065a289  896964               mov dword ptr [ecx + 0x64], ebp
// 0065a28c  896c2428             mov dword ptr [esp + 0x28], ebp
// 0065a290  894508               mov dword ptr [ebp + 8], eax
// 0065a293  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 0065a29a  85c0                 test eax, eax
// 0065a29c  7403                 je 0x65a2a1
// 0065a29e  89680c               mov dword ptr [eax + 0xc], ebp
// 0065a2a1  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0065a2a5  8d0c40               lea ecx, [eax + eax*2]
// 0065a2a8  8b54cb1c             mov edx, dword ptr [ebx + ecx*8 + 0x1c]
// 0065a2ac  2b54cb18             sub edx, dword ptr [ebx + ecx*8 + 0x18]
// 0065a2b0  8d1ccb               lea ebx, [ebx + ecx*8]
// 0065a2b3  c1fa03               sar edx, 3
// 0065a2b6  3bf2                 cmp esi, edx
// 0065a2b8  7206                 jb 0x65a2c0
// 0065a2ba  ff1590288000         call dword ptr [0x802890]
// 0065a2c0  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0065a2c3  8b04f0               mov eax, dword ptr [eax + esi*8]
// 0065a2c6  894504               mov dword ptr [ebp + 4], eax
// 0065a2c9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0065a2cc  2b4b18               sub ecx, dword ptr [ebx + 0x18]
// 0065a2cf  89442410             mov dword ptr [esp + 0x10], eax
// 0065a2d3  c1f903               sar ecx, 3
// 0065a2d6  3bf1                 cmp esi, ecx
// 0065a2d8  7206                 jb 0x65a2e0
// 0065a2da  ff1590288000         call dword ptr [0x802890]
// 0065a2e0  8b5318               mov edx, dword ptr [ebx + 0x18]
// 0065a2e3  892cf2               mov dword ptr [edx + esi*8], ebp
// 0065a2e6  8b4f04               mov ecx, dword ptr [edi + 4]
// 0065a2e9  8b07                 mov eax, dword ptr [edi]
// 0065a2eb  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0065a2ef  8b5708               mov edx, dword ptr [edi + 8]
// 0065a2f2  894c2430             mov dword ptr [esp + 0x30], ecx
// 0065a2f6  8944242c             mov dword ptr [esp + 0x2c], eax
// 0065a2fa  83c8ff               or eax, 0xffffffff
// 0065a2fd  8bcd                 mov ecx, ebp
// 0065a2ff  3b0da8259600         cmp ecx, dword ptr [0x9625a8]
// 0065a305  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0065a30d  89542434             mov dword ptr [esp + 0x34], edx
// 0065a311  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065a315  c644244401           mov byte ptr [esp + 0x44], 1
// 0065a31a  0f8d6c010000         jge 0x65a48c
// 0065a320  83c318               add ebx, 0x18
// 0065a323  2bc1                 sub eax, ecx
// 0065a325  895c2420             mov dword ptr [esp + 0x20], ebx
// 0065a329  89442424             mov dword ptr [esp + 0x24], eax
// 0065a32d  8d4900               lea ecx, [ecx]
// 0065a330  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0065a334  7e5c                 jle 0x65a392
// 0065a336  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065a33a  8b742434             mov esi, dword ptr [esp + 0x34]
// 0065a33e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065a342  d1fe                 sar esi, 1
// 0065a344  d1f8                 sar eax, 1
// 0065a346  d1f9                 sar ecx, 1
// 0065a348  89742434             mov dword ptr [esp + 0x34], esi
// 0065a34c  69f6b7fff904         imul esi, esi, 0x4f9ffb7
// 0065a352  8944242c             mov dword ptr [esp + 0x2c], eax
// 0065a356  69c05df46604         imul eax, eax, 0x466f45d
// 0065a35c  894c2430             mov dword ptr [esp + 0x30], ecx
// 0065a360  69c99f402701         imul ecx, ecx, 0x127409f
// 0065a366  33f0                 xor esi, eax
// 0065a368  33f1                 xor esi, ecx
// 0065a36a  8bcd                 mov ecx, ebp
// 0065a36c  b8ffff0000           mov eax, 0xffff
// 0065a371  d3f8                 sar eax, cl
// 0065a373  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0065a376  2b0b                 sub ecx, dword ptr [ebx]
// 0065a378  23f0                 and esi, eax
// 0065a37a  c1f903               sar ecx, 3
// 0065a37d  3bf1                 cmp esi, ecx
// 0065a37f  7206                 jb 0x65a387
// 0065a381  ff1590288000         call dword ptr [0x802890]
// 0065a387  8b13                 mov edx, dword ptr [ebx]
// 0065a389  8b04f2               mov eax, dword ptr [edx + esi*8]
// 0065a38c  89442410             mov dword ptr [esp + 0x10], eax
// 0065a390  eb04                 jmp 0x65a396
// 0065a392  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065a396  85c0                 test eax, eax
// 0065a398  7462                 je 0x65a3fc
// 0065a39a  eb08                 jmp 0x65a3a4
// 0065a39c  8d642400             lea esp, [esp]
// 0065a3a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065a3a4  8b18                 mov ebx, dword ptr [eax]
// 0065a3a6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0065a3aa  ff442418             inc dword ptr [esp + 0x18]
// 0065a3ae  3bd9                 cmp ebx, ecx
// 0065a3b0  743f                 je 0x65a3f1
// 0065a3b2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065a3b6  395014               cmp dword ptr [eax + 0x14], edx
// 0065a3b9  7536                 jne 0x65a3f1
// 0065a3bb  8b5018               mov edx, dword ptr [eax + 0x18]
// 0065a3be  3b542430             cmp edx, dword ptr [esp + 0x30]
// 0065a3c2  752d                 jne 0x65a3f1
// 0065a3c4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0065a3c7  3b542434             cmp edx, dword ptr [esp + 0x34]
// 0065a3cb  7524                 jne 0x65a3f1
// 0065a3cd  53                   push ebx
// 0065a3ce  51                   push ecx
// 0065a3cf  e85cd9f8ff           call 0x5e7d30
// 0065a3d4  83c408               add esp, 8
// 0065a3d7  85c0                 test eax, eax
// 0065a3d9  7512                 jne 0x65a3ed
// 0065a3db  8b442440             mov eax, dword ptr [esp + 0x40]
// 0065a3df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a3e3  8b4908               mov ecx, dword ptr [ecx + 8]
// 0065a3e6  53                   push ebx
// 0065a3e7  50                   push eax
// 0065a3e8  e8c334fbff           call 0x60d8b0
// 0065a3ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065a3f1  8b4004               mov eax, dword ptr [eax + 4]
// 0065a3f4  89442410             mov dword ptr [esp + 0x10], eax
// 0065a3f8  85c0                 test eax, eax
// 0065a3fa  75a4                 jne 0x65a3a0
// 0065a3fc  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0065a400  7e6e                 jle 0x65a470
// 0065a402  807c244400           cmp byte ptr [esp + 0x44], 0
// 0065a407  7467                 je 0x65a470
// 0065a409  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0065a40d  8d54242c             lea edx, [esp + 0x2c]
// 0065a411  52                   push edx
// 0065a412  56                   push esi
// 0065a413  55                   push ebp
// 0065a414  8bcb                 mov ecx, ebx
// 0065a416  e855f2ffff           call 0x659670
// 0065a41b  85c0                 test eax, eax
// 0065a41d  750e                 jne 0x65a42d
// 0065a41f  8d44242c             lea eax, [esp + 0x2c]
// 0065a423  50                   push eax
// 0065a424  56                   push esi
// 0065a425  55                   push ebp
// 0065a426  8bcb                 mov ecx, ebx
// 0065a428  e8a3f2ffff           call 0x6596d0
// 0065a42d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065a431  8b5708               mov edx, dword ptr [edi + 8]
// 0065a434  8b5f04               mov ebx, dword ptr [edi + 4]
// 0065a437  03cd                 add ecx, ebp
// 0065a439  d3fb                 sar ebx, cl
// 0065a43b  d3fa                 sar edx, cl
// 0065a43d  83e301               and ebx, 1
// 0065a440  83e201               and edx, 1
// 0065a443  8d1453               lea edx, [ebx + edx*2]
// 0065a446  8b1f                 mov ebx, dword ptr [edi]
// 0065a448  d3fb                 sar ebx, cl
// 0065a44a  83e301               and ebx, 1
// 0065a44d  8d0c53               lea ecx, [ebx + edx*2]
// 0065a450  8a5012               mov dl, byte ptr [eax + 0x12]
// 0065a453  b301                 mov bl, 1
// 0065a455  d2e3                 shl bl, cl
// 0065a457  84d3                 test bl, dl
// 0065a459  7407                 je 0x65a462
// 0065a45b  c644244400           mov byte ptr [esp + 0x44], 0
// 0065a460  eb0e                 jmp 0x65a470
// 0065a462  0ad3                 or dl, bl
// 0065a464  885012               mov byte ptr [eax + 0x12], dl
// 0065a467  668b54241c           mov dx, word ptr [esp + 0x1c]
// 0065a46c  66891448             mov word ptr [eax + ecx*2], dx
// 0065a470  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0065a474  45                   inc ebp
// 0065a475  83c318               add ebx, 0x18
// 0065a478  3b2da8259600         cmp ebp, dword ptr [0x9625a8]
// 0065a47e  8974241c             mov dword ptr [esp + 0x1c], esi
// 0065a482  895c2420             mov dword ptr [esp + 0x20], ebx
// 0065a486  0f8ca4feffff         jl 0x65a330
// 0065a48c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065a490  6683782000           cmp word ptr [eax + 0x20], 0
// 0065a495  8b742414             mov esi, dword ptr [esp + 0x14]
// 0065a499  7610                 jbe 0x65a4ab
// 0065a49b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0065a49f  8b5024               mov edx, dword ptr [eax + 0x24]
// 0065a4a2  51                   push ecx
// 0065a4a3  52                   push edx
// 0065a4a4  8bce                 mov ecx, esi
// 0065a4a6  e865f5ffff           call 0x659a10
// 0065a4ab  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065a4af  39467c               cmp dword ptr [esi + 0x7c], eax
// 0065a4b2  7d13                 jge 0x65a4c7
// 0065a4b4  8d442418             lea eax, [esp + 0x18]
// 0065a4b8  8b08                 mov ecx, dword ptr [eax]
// 0065a4ba  5f                   pop edi
// 0065a4bb  894e7c               mov dword ptr [esi + 0x7c], ecx
// 0065a4be  5e                   pop esi
// 0065a4bf  5d                   pop ebp
// 0065a4c0  5b                   pop ebx
// 0065a4c1  83c428               add esp, 0x28
// 0065a4c4  c20c00               ret 0xc
// 0065a4c7  8b567c               mov edx, dword ptr [esi + 0x7c]
// 0065a4ca  5f                   pop edi
// 0065a4cb  89567c               mov dword ptr [esi + 0x7c], edx
// 0065a4ce  5e                   pop esi
// 0065a4cf  5d                   pop ebp
// 0065a4d0  5b                   pop ebx
// 0065a4d1  83c428               add esp, 0x28
// 0065a4d4  c20c00               ret 0xc

// from server: 74% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <vector>
#include <algorithm>
struct Vector {int x,y,z;Vector(int a,int b,int c):x(a),y(b),z(c){}};
struct Primitive;struct TreeNode;
struct SpatialNode {Primitive* primitive;SpatialNode* next;SpatialNode* nextPrimitive;SpatialNode* prevPrimitive;unsigned hash;Vector grid;unsigned short level;unsigned short pad;};
struct LargeNode:SpatialNode {TreeNode* owner;};
struct TreeNode {unsigned short children[8];unsigned short level;unsigned char mask;char opaque[9];Vector grid;TreeNode* next;};
struct Primitive {char prefix[0x64];SpatialNode* nodes;};
struct Bucket {SpatialNode* head;TreeNode* tree;};
struct Manager {void onNewPair(Primitive*,Primitive*);};
void* __cdecl findContact(Primitive*,Primitive*);
extern int levelLimit;
extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();
typedef std::vector<Bucket> Buckets;
typedef char buckets_extent[sizeof(Buckets)==24?1:-1];
struct SpatialHash {
 char prefix[8];Manager* manager;Buckets levels[4];SpatialNode* freeSmall;SpatialNode* freeLarge;char reserved74[4];int nodeCount,maxBucket;
 SpatialNode* allocate(int,unsigned,const Vector&);
 TreeNode* find(int,unsigned,const Vector&);
 TreeNode* create(int,unsigned,const Vector&);
 void collide(TreeNode*,Primitive*);
 void addNode(int,Primitive*,const Vector&);
};
void SpatialHash::addNode(int level,Primitive* primitive,const Vector& grid){
 unsigned hash=(grid.z*0x04f9ffb7u ^grid.y*0x0127409fu ^grid.x*0x0466f45du)&(0xffff>>level);
 ++nodeCount;
 SpatialNode* node=allocate(level,hash,grid);
 node->primitive=primitive;node->grid=grid;node->hash=hash;
 SpatialNode* old=primitive->nodes;primitive->nodes=node;node->nextPrimitive=old;node->prevPrimitive=0;if(old)old->prevPrimitive=node;
 node->next=levels[level][hash].head;
 SpatialNode* current=node->next;
 levels[level][hash].head=node;
 Vector parent=grid;
 unsigned previousHash=~0u;
 int count=1;
 bool buildParent=true;
 for(int currentLevel=level;currentLevel<levelLimit;++currentLevel){
  if(currentLevel>level){
   parent.x>>=1;parent.y>>=1;parent.z>>=1;
   hash=(parent.z*0x04f9ffb7u ^parent.x*0x0466f45du ^parent.y*0x0127409fu)&(0xffff>>currentLevel);
   current=levels[currentLevel][hash].head;
  }
  while(current){
   Primitive* candidate=current->primitive;
   ++count;
   if(candidate!=primitive && current->grid.x==parent.x&&current->grid.y==parent.y&&current->grid.z==parent.z&&!findContact(primitive,candidate))manager->onNewPair(primitive,candidate);
   current=current->next;
  }
  if(currentLevel>level && buildParent){
   TreeNode* tree=find(currentLevel,hash,parent);
   if(!tree)tree=create(currentLevel,hash,parent);
   int shift=currentLevel-level-1;
   int index=((grid.x>>shift)&1)+2*(((grid.y>>shift)&1)+2*((grid.z>>shift)&1));
   unsigned char bit=(unsigned char)(1<<index);
   if(tree->mask&bit)buildParent=false;
   else {tree->mask|=bit;tree->children[index]=(unsigned short)previousHash;}
  }
  previousHash=hash;
 }
 if(node->level>0)collide(static_cast<LargeNode*>(node)->owner,primitive);
 maxBucket=std::max(maxBucket,count);
}

