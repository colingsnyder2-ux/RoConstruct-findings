// from server: 78% by colin
// roc 2007-08 0060bb40  unit: CXTCaptionButtonTheme  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060bb40
//
// 0060bb40  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0060bb43  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bb47  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0060bb4a  56                   push esi
// 0060bb4b  8b7064               mov esi, dword ptr [eax + 0x64]
// 0060bb4e  8b06                 mov eax, dword ptr [esi]
// 0060bb50  57                   push edi
// 0060bb51  8b7920               mov edi, dword ptr [ecx + 0x20]
// 0060bb54  8b7cbafc             mov edi, dword ptr [edx + edi*4 - 4]
// 0060bb58  83c11c               add ecx, 0x1c
// 0060bb5b  893c82               mov dword ptr [edx + eax*4], edi
// 0060bb5e  8907                 mov dword ptr [edi], eax
// 0060bb60  8b5104               mov edx, dword ptr [ecx + 4]
// 0060bb63  6a00                 push 0
// 0060bb65  83ea01               sub edx, 1
// 0060bb68  52                   push edx
// 0060bb69  e8b237fcff           call 0x5cf320
// 0060bb6e  5f                   pop edi
// 0060bb6f  c706ffffffff         mov dword ptr [esi], 0xffffffff
// 0060bb75  5e                   pop esi
// 0060bb76  c20400               ret 4

struct CXTCaptionButtonTheme {
    char pad[0x1c];
    int m_nCount;
    int m_nIndex;
    void* m_pTheme;
    void RemoveAt(int nIndex);
};

void CXTCaptionButtonTheme::RemoveAt(int nIndex) {
    int* pArray = *(int**)((char*)m_pTheme + 0x64);
    int nOld = pArray[0];
    int idx = *(int*)((char*)this + 0x20);
    int* pList = *(int**)((char*)this + 0x1c);
    int val = pList[idx - 1];
    pList[nOld] = val;
    *(int*)val = nOld;
    int nCount = *(int*)((char*)this + 0x20);
    extern void __stdcall sub_5cf320(int, int);
    sub_5cf320(nCount - 1, 0);
    pArray[0] = -1;
}
