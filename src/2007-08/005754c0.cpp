// from server: 74% by colin
// roc 2007-08 005754c0  unit: RBX::PartInstance  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005754c0
//
// 005754c0  8d8190feffff         lea eax, [ecx - 0x170]
// 005754c6  85c0                 test eax, eax
// 005754c8  7408                 je 0x5754d2
// 005754ca  8d8194feffff         lea eax, [ecx - 0x16c]
// 005754d0  eb02                 jmp 0x5754d4
// 005754d2  33c0                 xor eax, eax
// 005754d4  50                   push eax
// 005754d5  b990298c00           mov ecx, 0x8c2990
// 005754da  e891adffff           call 0x570270
// 005754df  85c0                 test eax, eax
// 005754e1  7418                 je 0x5754fb
// 005754e3  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005754e6  e845211b00           call 0x727630
// 005754eb  84c0                 test al, al
// 005754ed  750c                 jne 0x5754fb
// 005754ef  33c0                 xor eax, eax
// 005754f1  33c9                 xor ecx, ecx
// 005754f3  84c0                 test al, al
// 005754f5  0f94c1               sete cl
// 005754f8  8ac1                 mov al, cl
// 005754fa  c3                   ret 
// 005754fb  b801000000           mov eax, 1
// 00575500  33c9                 xor ecx, ecx
// 00575502  84c0                 test al, al
// 00575504  0f94c1               sete cl
// 00575507  8ac1                 mov al, cl
// 00575509  c3                   ret 

struct S_005754c0 {
    char pad[0x170];
    bool f();
};

bool S_005754c0::f()
{
    extern bool __stdcall sub_00570270(void*, void*);
    extern bool __stdcall sub_00727630(void*);
    char* p = (char*)this - 0x170;
    char* q;
    if (p != 0) {
        q = (char*)this - 0x16c;
    } else {
        q = 0;
    }
    bool r = sub_00570270((void*)0x8c2990, q);
    if (r) {
        r = sub_00727630(*(void**)((char*)r + 0x10));
    }
    return !r;
}
