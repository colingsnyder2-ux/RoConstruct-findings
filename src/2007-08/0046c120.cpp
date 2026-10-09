// from server: 46% by colin
// roc 2007-08 0046c120  unit: RBX::LDraw2Lua::LDrawParser  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c120
//
// 0046c120  6aff                 push -1
// 0046c122  685cfd7400           push 0x74fd5c
// 0046c127  64a100000000         mov eax, dword ptr fs:[0]
// 0046c12d  50                   push eax
// 0046c12e  51                   push ecx
// 0046c12f  56                   push esi
// 0046c130  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046c135  33c4                 xor eax, esp
// 0046c137  50                   push eax
// 0046c138  8d44240c             lea eax, [esp + 0xc]
// 0046c13c  64a300000000         mov dword ptr fs:[0], eax
// 0046c142  8bf1                 mov esi, ecx
// 0046c144  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046c148  50                   push eax
// 0046c149  8d4e04               lea ecx, [esi + 4]
// 0046c14c  c70670637900         mov dword ptr [esi], 0x796370
// 0046c152  ff1598e67700         call dword ptr [0x77e698]
// 0046c158  33c0                 xor eax, eax
// 0046c15a  894624               mov dword ptr [esi + 0x24], eax
// 0046c15d  894628               mov dword ptr [esi + 0x28], eax
// 0046c160  89462c               mov dword ptr [esi + 0x2c], eax
// 0046c163  8bc6                 mov eax, esi
// 0046c165  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046c169  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c170  59                   pop ecx
// 0046c171  5e                   pop esi
// 0046c172  83c410               add esp, 0x10
// 0046c175  c20400               ret 4

struct RBX_LDrawParser {
    int field0;
    char pad[0x20];
    int field24;
    int field28;
    int field2c;
    RBX_LDrawParser(const char*);
};

extern "C" __declspec(dllimport) void* __stdcall MSVCP80_basic_string_ctor(void*, const char*);

RBX_LDrawParser::RBX_LDrawParser(const char* s)
{
    field0 = 0x796370;
    MSVCP80_basic_string_ctor((char*)this + 4, s);
    field24 = 0;
    field28 = 0;
    field2c = 0;
}
