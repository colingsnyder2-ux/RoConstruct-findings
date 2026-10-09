// from server: 100% by colin
// roc 2007-08 00675040  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675040
//
// 00675040  83ec10               sub esp, 0x10
// 00675043  56                   push esi
// 00675044  8bf1                 mov esi, ecx
// 00675046  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0067504c  57                   push edi
// 0067504d  e87e15fdff           call 0x6465d0
// 00675052  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00675058  8bf8                 mov edi, eax
// 0067505a  e8f1e6fcff           call 0x643750
// 0067505f  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00675065  8d4c2408             lea ecx, [esp + 8]
// 00675069  51                   push ecx
// 0067506a  50                   push eax
// 0067506b  c744241864000000     mov dword ptr [esp + 0x18], 0x64
// 00675073  89442414             mov dword ptr [esp + 0x14], eax
// 00675077  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0067507f  8974241c             mov dword ptr [esp + 0x1c], esi
// 00675083  8b5720               mov edx, dword ptr [edi + 0x20]
// 00675086  6862280000           push 0x2862
// 0067508b  52                   push edx
// 0067508c  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00675092  5f                   pop edi
// 00675093  5e                   pop esi
// 00675094  83c410               add esp, 0x10
// 00675097  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

extern "C" int __fastcall sub_6465D0(void*);
extern "C" void __fastcall sub_643750(void*);

struct CXTPCustomizeSheet_CCustomizeEdit
{
    char pad[0x84];
    unsigned int field_84;
    char pad2[0xfc - 0x88];
    void* field_fc;

    void func_00675040();
};

void CXTPCustomizeSheet_CCustomizeEdit::func_00675040()
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
