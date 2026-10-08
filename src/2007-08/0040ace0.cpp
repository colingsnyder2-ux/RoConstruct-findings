// from server: 100% by colin
// roc 2007-08 0040ace0  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040ace0
//
// 0040ace0  56                   push esi
// 0040ace1  57                   push edi
// 0040ace2  8b3dd8ec7700         mov edi, dword ptr [0x77ecd8]
// 0040ace8  6a00                 push 0
// 0040acea  8bf1                 mov esi, ecx
// 0040acec  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0040acf2  8b4020               mov eax, dword ptr [eax + 0x20]
// 0040acf5  6a00                 push 0
// 0040acf7  688b010000           push 0x18b
// 0040acfc  50                   push eax
// 0040acfd  ffd7                 call edi
// 0040acff  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040ad03  3bc8                 cmp ecx, eax
// 0040ad05  7d14                 jge 0x40ad1b
// 0040ad07  6a00                 push 0
// 0040ad09  51                   push ecx
// 0040ad0a  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0040ad10  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040ad13  6882010000           push 0x182
// 0040ad18  52                   push edx
// 0040ad19  ffd7                 call edi
// 0040ad1b  5f                   pop edi
// 0040ad1c  5e                   pop esi
// 0040ad1d  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct VCSecureHtmlView_CXTPCommandBarsSiteBase
{
    char pad[0x16c];
    void* field_16c;
    void f(unsigned int arg);
};

void VCSecureHtmlView_CXTPCommandBarsSiteBase::f(unsigned int arg)
{
    void* hwnd = *(void**)((char*)field_16c + 0x20);
    long result = SendMessageA(hwnd, 0x18b, 0, 0);
    if ((int)arg < result)
    {
        SendMessageA(*(void**)((char*)field_16c + 0x20), 0x182, arg, 0);
    }
}
