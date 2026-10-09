// from server: 86% by colin
// roc 2007-08 00715850  unit: CXTCaptionButton  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715850
//
// 00715850  53                   push ebx
// 00715851  56                   push esi
// 00715852  57                   push edi
// 00715853  8b3dd8ec7700         mov edi, dword ptr [0x77ecd8]
// 00715859  6a00                 push 0
// 0071585b  6a00                 push 0
// 0071585d  8bf1                 mov esi, ecx
// 0071585f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715862  6a31                 push 0x31
// 00715864  50                   push eax
// 00715865  ffd7                 call edi
// 00715867  50                   push eax
// 00715868  e8c1adf1ff           call 0x63062e
// 0071586d  8bd8                 mov ebx, eax
// 0071586f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00715873  85c0                 test eax, eax
// 00715875  7513                 jne 0x71588a
// 00715877  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0071587a  6a01                 push 1
// 0071587c  50                   push eax
// 0071587d  6a30                 push 0x30
// 0071587f  51                   push ecx
// 00715880  ffd7                 call edi
// 00715882  5f                   pop edi
// 00715883  5e                   pop esi
// 00715884  8bc3                 mov eax, ebx
// 00715886  5b                   pop ebx
// 00715887  c20400               ret 4
// 0071588a  8b4004               mov eax, dword ptr [eax + 4]
// 0071588d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00715890  6a01                 push 1
// 00715892  50                   push eax
// 00715893  6a30                 push 0x30
// 00715895  51                   push ecx
// 00715896  ffd7                 call edi
// 00715898  5f                   pop edi
// 00715899  5e                   pop esi
// 0071589a  8bc3                 mov eax, ebx
// 0071589c  5b                   pop ebx
// 0071589d  c20400               ret 4
// 007158a0  b868ee7d00           mov eax, 0x7dee68
// 007158a5  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTCaptionButton {
    char pad[0x20];
    void* m_hWnd;
    int GetText(int);
};

extern "C" void* __stdcall sub_63062E(void*);

int CXTCaptionButton::GetText(int n)
{
    long (__stdcall *pSend)(void*, unsigned int, unsigned int, long) = SendMessageA;
    void* p = (void*)pSend(m_hWnd, 0x31, 0, 0);
    int result = (int)sub_63062E(p);
    if (n == 0) {
        pSend(m_hWnd, 0x30, 0, 1);
    } else {
        pSend(m_hWnd, 0x30, *(unsigned int*)(n + 4), 1);
    }
    return result;
}
