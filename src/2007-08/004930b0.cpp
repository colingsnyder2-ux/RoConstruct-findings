// from server: 40% by colin
// roc 2007-08 004930b0  unit: RBX::Network::Players  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004930b0
//
// 004930b0  6aff                 push -1
// 004930b2  68917b7400           push 0x747b91
// 004930b7  64a100000000         mov eax, dword ptr fs:[0]
// 004930bd  50                   push eax
// 004930be  51                   push ecx
// 004930bf  a188518b00           mov eax, dword ptr [0x8b5188]
// 004930c4  33c4                 xor eax, esp
// 004930c6  50                   push eax
// 004930c7  8d442408             lea eax, [esp + 8]
// 004930cb  64a300000000         mov dword ptr fs:[0], eax
// 004930d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004930d5  89442418             mov dword ptr [esp + 0x18], eax
// 004930d9  89442404             mov dword ptr [esp + 4], eax
// 004930dd  85c0                 test eax, eax
// 004930df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004930e7  7414                 je 0x4930fd
// 004930e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004930ed  8b11                 mov edx, dword ptr [ecx]
// 004930ef  83c104               add ecx, 4
// 004930f2  51                   push ecx
// 004930f3  8d4804               lea ecx, [eax + 4]
// 004930f6  8910                 mov dword ptr [eax], edx
// 004930f8  e8d316f8ff           call 0x4147d0
// 004930fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00493101  64890d00000000       mov dword ptr fs:[0], ecx
// 00493108  59                   pop ecx
// 00493109  83c410               add esp, 0x10
// 0049310c  c3                   ret 

struct S {
    void f();
};

extern "C" void __cdecl func_004147d0(void*, void*);

void S::f()
{
    void* p = *(void**)((char*)this + 0x18);
    *(void**)((char*)this + 0x18) = p;
    *(void**)((char*)this + 4) = p;
    *(int*)((char*)this + 0x10) = 0;
    if (p) {
        void* q = *(void**)((char*)this + 0x1c);
        int v = *(int*)q;
        q = (char*)q + 4;
        *(int*)p = v;
        func_004147d0((char*)p + 4, q);
    }
}
