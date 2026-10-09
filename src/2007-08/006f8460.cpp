// from server: 60% by colin
// roc 2007-08 006f8460  unit: CXTPPropertyGridInplaceEdit  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8460
//
// 006f8460  56                   push esi
// 006f8461  8bf1                 mov esi, ecx
// 006f8463  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 006f8467  741f                 je 0x6f8488
// 006f8469  837e2000             cmp dword ptr [esi + 0x20], 0
// 006f846d  7419                 je 0x6f8488
// 006f846f  e89eff0300           call 0x738412
// 006f8474  a900080000           test eax, 0x800
// 006f8479  750d                 jne 0x6f8488
// 006f847b  8d4e70               lea ecx, [esi + 0x70]
// 006f847e  ff15d0dc7700         call dword ptr [0x77dcd0]
// 006f8484  84c0                 test al, al
// 006f8486  7417                 je 0x6f849f
// 006f8488  8b06                 mov eax, dword ptr [esi]
// 006f848a  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 006f8490  6a00                 push 0
// 006f8492  6a00                 push 0
// 006f8494  6800030000           push 0x300
// 006f8499  8bce                 mov ecx, esi
// 006f849b  ffd2                 call edx
// 006f849d  5e                   pop esi
// 006f849e  c3                   ret 
// 006f849f  8bce                 mov ecx, esi
// 006f84a1  e86af4ffff           call 0x6f7910
// 006f84a6  8bce                 mov ecx, esi
// 006f84a8  e843faffff           call 0x6f7ef0
// 006f84ad  b801000000           mov eax, 1
// 006f84b2  5e                   pop esi
// 006f84b3  c3                   ret 

struct CXTPPropertyGridInplaceEdit {
    int field0;
    char pad[0x1c];
    int field20;
    char pad2[0x38];
    int field5c;
    char pad3[0x10];
    int field70;
    int method_6f8460();
};

extern int __cdecl func_00738412();
extern char __stdcall func_0077dcd0(int*);
extern void func_006f7910(CXTPPropertyGridInplaceEdit*);
extern void func_006f7ef0(CXTPPropertyGridInplaceEdit*);

int CXTPPropertyGridInplaceEdit::method_6f8460()
{
    if (field5c != 0 && field20 != 0)
    {
        if ((func_00738412() & 0x800) == 0)
        {
            if (func_0077dcd0(&field70) == 0)
            {
                func_006f7910(this);
                func_006f7ef0(this);
                return 1;
            }
        }
    }
    (*(void (__thiscall **)(CXTPPropertyGridInplaceEdit*, int, int, int))(*(int*)this + 0x118))(this, 0x300, 0, 0);
    return 0;
}
