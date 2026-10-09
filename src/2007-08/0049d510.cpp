// from server: 31% by colin
// roc 2007-08 0049d510  unit: RBX::Network::Server  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049d510
//
// 0049d510  6aff                 push -1
// 0049d512  68917b7400           push 0x747b91
// 0049d517  64a100000000         mov eax, dword ptr fs:[0]
// 0049d51d  50                   push eax
// 0049d51e  51                   push ecx
// 0049d51f  a188518b00           mov eax, dword ptr [0x8b5188]
// 0049d524  33c4                 xor eax, esp
// 0049d526  50                   push eax
// 0049d527  8d442408             lea eax, [esp + 8]
// 0049d52b  64a300000000         mov dword ptr fs:[0], eax
// 0049d531  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049d535  89442418             mov dword ptr [esp + 0x18], eax
// 0049d539  89442404             mov dword ptr [esp + 4], eax
// 0049d53d  85c0                 test eax, eax
// 0049d53f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049d547  7414                 je 0x49d55d
// 0049d549  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049d54d  8b11                 mov edx, dword ptr [ecx]
// 0049d54f  83c104               add ecx, 4
// 0049d552  51                   push ecx
// 0049d553  8d4804               lea ecx, [eax + 4]
// 0049d556  8910                 mov dword ptr [eax], edx
// 0049d558  e893f8ffff           call 0x49cdf0
// 0049d55d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049d561  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d568  59                   pop ecx
// 0049d569  83c410               add esp, 0x10
// 0049d56c  c3                   ret 

struct S {
    void f(void*, void*);
};

extern "C" void __cdecl sub_49CDF0(void*);

void S::f(void* a, void* b)
{
    int* p = (int*)a;
    if (p != 0) {
        int* src = (int*)b;
        int v = *src;
        src = src + 1;
        *p = v;
        sub_49CDF0((char*)p + 4);
    }
}
