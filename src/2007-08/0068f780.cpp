// from server: 93% by colin
// roc 2007-08 0068f780  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f780
//
// 0068f780  56                   push esi
// 0068f781  8d442408             lea eax, [esp + 8]
// 0068f785  50                   push eax
// 0068f786  8bf1                 mov esi, ecx
// 0068f788  e8431cfeff           call 0x6713d0
// 0068f78d  85c0                 test eax, eax
// 0068f78f  7409                 je 0x68f79a
// 0068f791  b857000780           mov eax, 0x80070057
// 0068f796  5e                   pop esi
// 0068f797  c21400               ret 0x14
// 0068f79a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068f79e  66c7010300           mov word ptr [ecx], 3
// 0068f7a3  c7410800002000       mov dword ptr [ecx + 8], 0x200000
// 0068f7aa  837ed800             cmp dword ptr [esi - 0x28], 0
// 0068f7ae  7507                 jne 0x68f7b7
// 0068f7b0  c7410800802000       mov dword ptr [ecx + 8], 0x208000
// 0068f7b7  8b46d8               mov eax, dword ptr [esi - 0x28]
// 0068f7ba  85c0                 test eax, eax
// 0068f7bc  740f                 je 0x68f7cd
// 0068f7be  83c6a8               add esi, -0x58
// 0068f7c1  39b04c010000         cmp dword ptr [eax + 0x14c], esi
// 0068f7c7  7504                 jne 0x68f7cd
// 0068f7c9  83490802             or dword ptr [ecx + 8], 2
// 0068f7cd  33c0                 xor eax, eax
// 0068f7cf  5e                   pop esi
// 0068f7d0  c21400               ret 0x14

struct CXTPDockingPane
{
    int method(int* out);
    int func(int a1, int a2, int a3, int a4, int* out);
};

int CXTPDockingPane::func(int a1, int a2, int a3, int a4, int* out)
{
    int local;
    if (method(&local) != 0)
        return 0x80070057;

    *(unsigned short*)out = 3;
    *(int*)((char*)out + 8) = 0x200000;

    if (*(int*)((char*)this - 0x28) == 0)
        *(int*)((char*)out + 8) = 0x208000;

    int v = *(int*)((char*)this - 0x28);
    if (v != 0)
    {
        if (*(int*)(v + 0x14c) == (int)((char*)this - 0x58))
            *(int*)((char*)out + 8) |= 2;
    }

    return 0;
}
