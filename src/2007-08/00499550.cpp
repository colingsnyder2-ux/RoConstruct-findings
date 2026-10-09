// from server: 50% by colin
// roc 2007-08 00499550  unit: RBX::Network::VClient::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00499550
//
// 00499550  6aff                 push -1
// 00499552  68d9987400           push 0x7498d9
// 00499557  64a100000000         mov eax, dword ptr fs:[0]
// 0049955d  50                   push eax
// 0049955e  56                   push esi
// 0049955f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00499564  33c4                 xor eax, esp
// 00499566  50                   push eax
// 00499567  8d442408             lea eax, [esp + 8]
// 0049956b  64a300000000         mov dword ptr fs:[0], eax
// 00499571  8bf1                 mov esi, ecx
// 00499573  8d442418             lea eax, [esp + 0x18]
// 00499577  50                   push eax
// 00499578  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00499580  ff159ce67700         call dword ptr [0x77e69c]
// 00499586  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049958a  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0049958d  8d4c2418             lea ecx, [esp + 0x18]
// 00499591  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00499599  ff15ace67700         call dword ptr [0x77e6ac]
// 0049959f  8bc6                 mov eax, esi
// 004995a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004995a5  64890d00000000       mov dword ptr fs:[0], ecx
// 004995ac  59                   pop ecx
// 004995ad  5e                   pop esi
// 004995ae  83c40c               add esp, 0xc
// 004995b1  c22000               ret 0x20

struct VClient {
    char pad[0x1c];
    int field_1c;
    VClient(const char* name, int a, int b, int c, int d, int e, int f, int g);
};

extern "C" void* __stdcall sub_77E69C(void*);
extern "C" void __stdcall sub_77E6AC(void*);

VClient::VClient(const char* name, int a, int b, int c, int d, int e, int f, int g) {
    char local[0x18];
    *(int*)(local + 0x0c) = 0;
    sub_77E69C(local);
    field_1c = g;
    *(int*)(local + 0x0c) = -1;
    sub_77E6AC(local);
}
