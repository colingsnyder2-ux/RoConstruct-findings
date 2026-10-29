// from server: 100% by colin
// roc 2007-03 0076e840  unit: seg_00760000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e840
//
// 0076e840  6aff                 push -1
// 0076e842  68c0547900           push 0x7954c0
// 0076e847  e894f0dbff           call 0x52d8e0
// 0076e84c  83c408               add esp, 8
// 0076e84f  a3c8758b00           mov dword ptr [0x8b75c8], eax
// 0076e854  c3                   ret 

extern "C" int helper(const char*,int); extern int g;
void func(){g=helper((const char*)0x7954c0,-1);}
