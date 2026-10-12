// from server: 62% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy- /GF /GS- /EHsc /MD
struct Guard { Guard(); ~Guard(); };
struct Node { virtual ~Node(); int a,b; void* p; int extra; };
struct S { Node* n; S(void* p,int unused); };
S::S(void* p,int unused){ Guard guard; n=0; n=new Node; if(n){n->a=1;n->b=1;n->p=p;} }
