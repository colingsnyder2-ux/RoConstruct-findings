// from server: 51% by colin
// roc 2007-08 0046c4f0  unit: RBX::LDraw2Lua::LuaWriter  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c4f0
//
// 0046c4f0  56                   push esi
// 0046c4f1  8bf1                 mov esi, ecx
// 0046c4f3  8b06                 mov eax, dword ptr [esi]
// 0046c4f5  83f8fe               cmp eax, -2
// 0046c4f8  7427                 je 0x46c521
// 0046c4fa  85c0                 test eax, eax
// 0046c4fc  57                   push edi
// 0046c4fd  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 0046c503  7502                 jne 0x46c507
// 0046c505  ffd7                 call edi
// 0046c507  8b0e                 mov ecx, dword ptr [esi]
// 0046c509  ff15e8e57700         call dword ptr [0x77e5e8]
// 0046c50f  8b0e                 mov ecx, dword ptr [esi]
// 0046c511  034114               add eax, dword ptr [ecx + 0x14]
// 0046c514  394604               cmp dword ptr [esi + 4], eax
// 0046c517  7202                 jb 0x46c51b
// 0046c519  ffd7                 call edi
// 0046c51b  8b4604               mov eax, dword ptr [esi + 4]
// 0046c51e  5f                   pop edi
// 0046c51f  5e                   pop esi
// 0046c520  c3                   ret 
// 0046c521  8b4604               mov eax, dword ptr [esi + 4]
// 0046c524  5e                   pop esi
// 0046c525  c3                   ret 

extern "C" void __cdecl _invalid_parameter_noinfo();

struct LuaWriter {
    int* stream;
    unsigned int level;
    unsigned int GetSize();
};

unsigned int LuaWriter::GetSize()
{
    int* s = stream;
    if (s != (int*)-2)
        return level;
    if (s != 0)
        _invalid_parameter_noinfo();
    unsigned int n = ((unsigned int (__thiscall *)(int*))0x77e5e8)(s);
    n += *(unsigned int*)((char*)s + 0x14);
    if (level >= n)
        _invalid_parameter_noinfo();
    return level;
}
