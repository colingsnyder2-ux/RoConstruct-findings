// from server: 75% by colin
// roc 2007-08 0063bbf0  unit: PAVCXTPControlAction::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bbf0
//
// 0063bbf0  56                   push esi
// 0063bbf1  57                   push edi
// 0063bbf2  8bf9                 mov edi, ecx
// 0063bbf4  33f6                 xor esi, esi
// 0063bbf6  397764               cmp dword ptr [edi + 0x64], esi
// 0063bbf9  7e28                 jle 0x63bc23
// 0063bbfb  53                   push ebx
// 0063bbfc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0063bc00  85f6                 test esi, esi
// 0063bc02  7c24                 jl 0x63bc28
// 0063bc04  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0063bc07  7d1f                 jge 0x63bc28
// 0063bc09  8b4760               mov eax, dword ptr [edi + 0x60]
// 0063bc0c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0063bc0f  8b11                 mov edx, dword ptr [ecx]
// 0063bc11  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 0063bc17  53                   push ebx
// 0063bc18  ffd0                 call eax
// 0063bc1a  83c601               add esi, 1
// 0063bc1d  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0063bc20  7cde                 jl 0x63bc00
// 0063bc22  5b                   pop ebx
// 0063bc23  5f                   pop edi
// 0063bc24  5e                   pop esi
// 0063bc25  c20400               ret 4
// 0063bc28  e8f342ffff           call 0x62ff20

struct PAVCXTPControlAction_CArray
{
    int unknown0[24];
    void* items;
    int count;
    void func(int);
};

void PAVCXTPControlAction_CArray::func(int arg)
{
    int i = 0;
    if (count > 0)
    {
        do
        {
            if (i < 0 || i >= count)
                break;
            void* p = ((void**)items)[i];
            (*(void (__thiscall**)(void*, int))(*(int*)p + 0x138))(p, arg);
            ++i;
        } while (i < count);
    }
}
