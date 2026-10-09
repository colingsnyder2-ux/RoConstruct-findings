// from server: 49% by colin
// roc 2007-08 004f36d0  unit: boost::bad_lexical_cast  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f36d0
//
// 004f36d0  6aff                 push -1
// 004f36d2  6869f37400           push 0x74f369
// 004f36d7  64a100000000         mov eax, dword ptr fs:[0]
// 004f36dd  50                   push eax
// 004f36de  83ec1c               sub esp, 0x1c
// 004f36e1  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f36e6  33c4                 xor eax, esp
// 004f36e8  50                   push eax
// 004f36e9  8d442420             lea eax, [esp + 0x20]
// 004f36ed  64a300000000         mov dword ptr fs:[0], eax
// 004f36f3  8d442404             lea eax, [esp + 4]
// 004f36f7  50                   push eax
// 004f36f8  ff1548e57700         call dword ptr [0x77e548]
// 004f36fe  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f3702  50                   push eax
// 004f3703  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004f370b  ff1590e67700         call dword ptr [0x77e690]
// 004f3711  8d4c2404             lea ecx, [esp + 4]
// 004f3715  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004f371d  ff15ace67700         call dword ptr [0x77e6ac]
// 004f3723  b001                 mov al, 1
// 004f3725  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f3729  64890d00000000       mov dword ptr fs:[0], ecx
// 004f3730  59                   pop ecx
// 004f3731  83c428               add esp, 0x28
// 004f3734  c20400               ret 4

extern "C" {
    int __stdcall func_77e548(int*);
    int __stdcall func_77e690(int, int);
    int __stdcall func_77e6ac(int*);
}

extern int G_8b5188;

struct S {
    void f(int);
};

void S::f(int arg)
{
    int local[8];
    int* p = local;
    func_77e548(p);
    int v = func_77e690(arg, 0);
    local[7] = -1;
    func_77e6ac(p);
}
