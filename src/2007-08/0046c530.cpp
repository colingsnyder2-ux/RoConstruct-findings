// from server: 76% by colin
// roc 2007-08 0046c530  unit: RBX::LDraw2Lua::LuaWriter  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c530
//
// 0046c530  56                   push esi
// 0046c531  8bf1                 mov esi, ecx
// 0046c533  8b06                 mov eax, dword ptr [esi]
// 0046c535  83f8fe               cmp eax, -2
// 0046c538  7422                 je 0x46c55c
// 0046c53a  85c0                 test eax, eax
// 0046c53c  57                   push edi
// 0046c53d  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 0046c543  7502                 jne 0x46c547
// 0046c545  ffd7                 call edi
// 0046c547  8b0e                 mov ecx, dword ptr [esi]
// 0046c549  ff15e8e57700         call dword ptr [0x77e5e8]
// 0046c54f  8b0e                 mov ecx, dword ptr [esi]
// 0046c551  034114               add eax, dword ptr [ecx + 0x14]
// 0046c554  394604               cmp dword ptr [esi + 4], eax
// 0046c557  7202                 jb 0x46c55b
// 0046c559  ffd7                 call edi
// 0046c55b  5f                   pop edi
// 0046c55c  83460401             add dword ptr [esi + 4], 1
// 0046c560  8bc6                 mov eax, esi
// 0046c562  5e                   pop esi
// 0046c563  c3                   ret 

struct S {
    int* ptr;
    unsigned int count;
    S* method();
};

extern "C" void __stdcall func_77e6d8();
extern "C" char* __stdcall func_77e5e8(int* p);

S* S::method()
{
    int* p = ptr;
    if (p != (int*)-2) {
        if (p == 0) {
            func_77e6d8();
        }
        p = ptr;
        char* q = func_77e5e8(p);
        int* r = ptr;
        unsigned int v = (unsigned int)(q + r[5]);
        if (count >= v) {
            func_77e6d8();
        }
    }
    count++;
    return this;
}
