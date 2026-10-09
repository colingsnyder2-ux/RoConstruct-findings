// from server: 74% by colin
// roc 2007-08 00673ca0  unit: CXTPCustomizeSheet::CCustomizeButton  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673ca0
//
// 00673ca0  83ec10               sub esp, 0x10
// 00673ca3  56                   push esi
// 00673ca4  8bf1                 mov esi, ecx
// 00673ca6  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00673cac  57                   push edi
// 00673cad  e81e29fdff           call 0x6465d0
// 00673cb2  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00673cb7  8bf8                 mov edi, eax
// 00673cb9  740b                 je 0x673cc6
// 00673cbb  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00673cc1  e88afafcff           call 0x643750
// 00673cc6  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00673ccc  8d4c2408             lea ecx, [esp + 8]
// 00673cd0  51                   push ecx
// 00673cd1  50                   push eax
// 00673cd2  c744241864000000     mov dword ptr [esp + 0x18], 0x64
// 00673cda  89442414             mov dword ptr [esp + 0x14], eax
// 00673cde  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00673ce6  8974241c             mov dword ptr [esp + 0x1c], esi
// 00673cea  8b5720               mov edx, dword ptr [edi + 0x20]
// 00673ced  6862280000           push 0x2862
// 00673cf2  52                   push edx
// 00673cf3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00673cf9  5f                   pop edi
// 00673cfa  5e                   pop esi
// 00673cfb  83c410               add esp, 0x10
// 00673cfe  c20400               ret 4

struct CXTPCustomizeSheet_CCustomizeButton {
    int OnCommand(int nID);
};

struct CXTPCustomizeSheet_Sub {
    int GetSomething();
    void DoSomething();
};

extern "C" int __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

int CXTPCustomizeSheet_CCustomizeButton::OnCommand(int nID)
{
    int result;
    int local1;
    int local2;
    int local3;
    int local4;

    result = ((CXTPCustomizeSheet_Sub*)(*(void**)((char*)this + 0xfc)))->GetSomething();

    if (nID != 0) {
        ((CXTPCustomizeSheet_Sub*)(*(void**)((char*)this + 0xfc)))->DoSomething();
    }

    local1 = 0;
    local2 = *(int*)((char*)this + 0x84);
    local3 = local2;
    local4 = 0x64;
    local4 = (int)this;

    SendMessageA(*(void**)(result + 0x20), 0x2862, local2, (long)&local1);

    return 0;
}
