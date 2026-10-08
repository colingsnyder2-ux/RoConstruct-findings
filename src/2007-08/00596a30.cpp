// from server: 60% by colin
// roc 2007-08 00596a30  unit: RBX::LaserTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596a30
//
// 00596a30  51                   push ecx
// 00596a31  56                   push esi
// 00596a32  8bf1                 mov esi, ecx
// 00596a34  8b06                 mov eax, dword ptr [esi]
// 00596a36  8b5044               mov edx, dword ptr [eax + 0x44]
// 00596a39  c744240400000000     mov dword ptr [esp + 4], 0
// 00596a41  ffd2                 call edx
// 00596a43  81c6f0000000         add esi, 0xf0
// 00596a49  56                   push esi
// 00596a4a  8b742410             mov esi, dword ptr [esp + 0x10]
// 00596a4e  8bce                 mov ecx, esi
// 00596a50  ff159ce67700         call dword ptr [0x77e69c]
// 00596a56  8bc6                 mov eax, esi
// 00596a58  5e                   pop esi
// 00596a59  59                   pop ecx
// 00596a5a  c20400               ret 4

struct LaserTool {
    void sub_596A30(int);
};

extern "C" void __stdcall sub_77E69C(void*, const void*);

void LaserTool::sub_596A30(int arg) {
    int local = 0;
    void* p = *(void**)((char*)this + 0xf0);
    (*(void (__thiscall**)(void*, int*))(*(char**)this + 0x44))(this, &local);
    sub_77E69C((char*)this + 0xf0, &local);
}
