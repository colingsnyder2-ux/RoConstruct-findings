// from server: 71% by colin
// roc 2007-08 006d1090  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d1090
//
// 006d1090  8bc1                 mov eax, ecx
// 006d1092  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d1096  8b11                 mov edx, dword ptr [ecx]
// 006d1098  8b8088000000         mov eax, dword ptr [eax + 0x88]
// 006d109e  8b5238               mov edx, dword ptr [edx + 0x38]
// 006d10a1  50                   push eax
// 006d10a2  ffd2                 call edx
// 006d10a4  6a05                 push 5
// 006d10a6  ff156cec7700         call dword ptr [0x77ec6c]
// 006d10ac  c20800               ret 8

extern "C" unsigned long __stdcall GetSysColorBrush(int);

struct CXTPReportInplaceEdit
{
    void SetValue(void* p, int n);
};

void CXTPReportInplaceEdit::SetValue(void* p, int n)
{
    (*(void (__stdcall **)(void*))(*(unsigned long*)p + 0x38))(*(void**)((char*)this + 0x88));
    GetSysColorBrush(5);
}
