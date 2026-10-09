// from server: 65% by colin
// roc 2007-08 0068be00  unit: CXTPTabClientWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068be00
//
// 0068be00  56                   push esi
// 0068be01  8bf1                 mov esi, ecx
// 0068be03  e81891deff           call 0x474f20
// 0068be08  85c0                 test eax, eax
// 0068be0a  750c                 jne 0x68be18
// 0068be0c  8b06                 mov eax, dword ptr [esi]
// 0068be0e  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0068be14  6aff                 push -1
// 0068be16  ffd2                 call edx
// 0068be18  8bce                 mov ecx, esi
// 0068be1a  e80191deff           call 0x474f20
// 0068be1f  85c0                 test eax, eax
// 0068be21  7504                 jne 0x68be27
// 0068be23  5e                   pop esi
// 0068be24  c20400               ret 4
// 0068be27  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0068be2d  85c0                 test eax, eax
// 0068be2f  7515                 jne 0x68be46
// 0068be31  e8ea90deff           call 0x474f20
// 0068be36  83e801               sub eax, 1
// 0068be39  7813                 js 0x68be4e
// 0068be3b  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0068be3e  7d0e                 jge 0x68be4e
// 0068be40  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0068be43  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0068be46  5e                   pop esi
// 0068be47  8bc8                 mov ecx, eax
// 0068be49  e902e7ffff           jmp 0x68a550
// 0068be4e  e8cd40faff           call 0x62ff20

struct CXTPTabClientWnd
{
    void func_0068be00(int);
};

extern "C" int __stdcall sub_00474f20();
extern "C" void __stdcall sub_0062ff20();
extern "C" void __stdcall sub_0068a550();

void CXTPTabClientWnd::func_0068be00(int arg)
{
    if (sub_00474f20() == 0)
    {
        (*(void (__thiscall **)(void *, int))(*((int *)this) + 0x164))(this, -1);
    }

    if (sub_00474f20() == 0)
    {
        return;
    }

    int v = *((int *)this + 0x98 / 4);
    if (v == 0)
    {
        int idx = sub_00474f20() - 1;
        if (idx >= 0 && idx < *((int *)this + 0x70 / 4))
        {
            v = *((int *)(*((int *)this + 0x6c / 4)) + idx * 4);
        }
        else
        {
            sub_0062ff20();
            return;
        }
    }

    sub_0068a550();
}
