// from server: 73% by colin
// roc 2007-08 007252af  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007252af
//
// 007252af  a1b4988c00           mov eax, dword ptr [0x8c98b4]
// 007252b4  83f801               cmp eax, 1
// 007252b7  ff742404             push dword ptr [esp + 4]
// 007252bb  7510                 jne 0x7252cd
// 007252bd  6a00                 push 0
// 007252bf  ff15b0d27700         call dword ptr [0x77d2b0]
// 007252c5  50                   push eax
// 007252c6  ff15acd27700         call dword ptr [0x77d2ac]
// 007252cc  c3                   ret 
// 007252cd  50                   push eax
// 007252ce  ff15b8988c00         call dword ptr [0x8c98b8]
// 007252d4  c3                   ret 

extern int G1;
extern void *(__stdcall *G2)(void *);
extern void *(__stdcall *G3)(void *);
extern void (__stdcall *G4)(void *);

void func_007252af(void *a)
{
    if (G1 == 1) {
        G4(G3(G2(0)));
    } else {
        G4(a);
    }
}
