// from server: 37% by colin
// roc 2007-08 00491b10  unit: RBX::Network::VPlayer::?$Listener  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491b10
//
// 00491b10  6aff                 push -1
// 00491b12  68917b7400           push 0x747b91
// 00491b17  64a100000000         mov eax, dword ptr fs:[0]
// 00491b1d  50                   push eax
// 00491b1e  51                   push ecx
// 00491b1f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00491b24  33c4                 xor eax, esp
// 00491b26  50                   push eax
// 00491b27  8d442408             lea eax, [esp + 8]
// 00491b2b  64a300000000         mov dword ptr fs:[0], eax
// 00491b31  8b442418             mov eax, dword ptr [esp + 0x18]
// 00491b35  89442418             mov dword ptr [esp + 0x18], eax
// 00491b39  89442404             mov dword ptr [esp + 4], eax
// 00491b3d  85c0                 test eax, eax
// 00491b3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00491b47  7415                 je 0x491b5e
// 00491b49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00491b4d  8b11                 mov edx, dword ptr [ecx]
// 00491b4f  83c104               add ecx, 4
// 00491b52  51                   push ecx
// 00491b53  8d4804               lea ecx, [eax + 4]
// 00491b56  8910                 mov dword ptr [eax], edx
// 00491b58  ff159ce67700         call dword ptr [0x77e69c]
// 00491b5e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491b62  64890d00000000       mov dword ptr fs:[0], ecx
// 00491b69  59                   pop ecx
// 00491b6a  83c410               add esp, 0x10
// 00491b6d  c3                   ret 

struct S {
    void f();
};

extern "C" void __stdcall func_77e69c(void*);

void S::f()
{
    char* p = *(char**)((char*)this + 0x18);
    *(char**)((char*)this + 0x18) = p;
    *(char**)((char*)this + 4) = p;
    *(int*)((char*)this + 0x10) = 0;
    if (p == 0) {
        int* src = *(int**)((char*)this + 0x1c);
        int v = *src;
        src++;
        func_77e69c(src);
        *(int*)p = v;
        func_77e69c(p + 4);
    }
}
