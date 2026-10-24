// from server: 77% by Espeon
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

