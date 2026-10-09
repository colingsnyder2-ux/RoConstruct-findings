// roc 2007-03 00660ee0  unit: seg_00660000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00660ee0
//
// 00660ee0  83ec10               sub esp, 0x10
// 00660ee3  56                   push esi
// 00660ee4  8bf1                 mov esi, ecx
// 00660ee6  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00660eec  57                   push edi
// 00660eed  e83eaafdff           call 0x63b930
// 00660ef2  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00660ef8  8bf8                 mov edi, eax
// 00660efa  e8017cfdff           call 0x638b00
// 00660eff  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00660f05  8d4c2408             lea ecx, [esp + 8]
// 00660f09  51                   push ecx
// 00660f0a  50                   push eax
// 00660f0b  c744241864000000     mov dword ptr [esp + 0x18], 0x64
// 00660f13  89442414             mov dword ptr [esp + 0x14], eax
// 00660f17  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00660f1f  8974241c             mov dword ptr [esp + 0x1c], esi
// 00660f23  8b5720               mov edx, dword ptr [edi + 0x20]
// 00660f26  6862280000           push 0x2862
// 00660f2b  52                   push edx
// 00660f2c  ff1550ee7700         call dword ptr [0x77ee50]
// 00660f32  5f                   pop edi
// 00660f33  5e                   pop esi
// 00660f34  83c410               add esp, 0x10
// 00660f37  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000b@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

extern "C" int __fastcall sub_6465D0(void*);
extern "C" void __fastcall sub_643750(void*);

struct CXTPCustomizeSheet_CCustomizeEdit
{
    char pad[0x84];
    unsigned int field_84;
    char pad2[0xfc - 0x88];
    void* field_fc;

    void fn_ROCX00000b();
};

void CXTPCustomizeSheet_CCustomizeEdit::fn_ROCX00000b()
{
    int v1 = sub_6465D0(this->field_fc);
    sub_643750(this->field_fc);

    unsigned int a = this->field_84;
    struct { unsigned int a; unsigned int b; unsigned int c; unsigned int d; } local;
    local.c = 0x64;
    local.b = a;
    local.a = 0;
    local.d = (unsigned int)this;

    void* hWnd = *(void**)(v1 + 0x20);
    SendMessageA(hWnd, 0x2862, a, (long)&local);
}
}
