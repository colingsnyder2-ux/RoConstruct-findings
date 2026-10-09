// from server: 64% by colin
// roc 2007-08 00448570  unit: CIDEDocManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00448570
//
// 00448570  57                   push edi
// 00448571  8b7c2408             mov edi, dword ptr [esp + 8]
// 00448575  85ff                 test edi, edi
// 00448577  7509                 jne 0x448582
// 00448579  b857000780           mov eax, 0x80070057
// 0044857e  5f                   pop edi
// 0044857f  c20400               ret 4
// 00448582  56                   push esi
// 00448583  8b7708               mov esi, dword ptr [edi + 8]
// 00448586  33c0                 xor eax, eax
// 00448588  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0044858b  7324                 jae 0x4485b1
// 0044858d  53                   push ebx
// 0044858e  8b1d10f07700         mov ebx, dword ptr [0x77f010]
// 00448594  85c0                 test eax, eax
// 00448596  7518                 jne 0x4485b0
// 00448598  8b0e                 mov ecx, dword ptr [esi]
// 0044859a  85c9                 test ecx, ecx
// 0044859c  740a                 je 0x4485a8
// 0044859e  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004485a1  85c0                 test eax, eax
// 004485a3  7403                 je 0x4485a8
// 004485a5  50                   push eax
// 004485a6  ffd3                 call ebx
// 004485a8  83c604               add esi, 4
// 004485ab  3b770c               cmp esi, dword ptr [edi + 0xc]
// 004485ae  72e4                 jb 0x448594
// 004485b0  5b                   pop ebx
// 004485b1  5e                   pop esi
// 004485b2  5f                   pop edi
// 004485b3  c20400               ret 4

struct CIDEDocManager {
    char pad[8];
    unsigned int* begin;
    unsigned int* end;
    long revokeAll(unsigned int* unused);
};

extern "C" long __stdcall CoRevokeClassObject(unsigned long);

long CIDEDocManager::revokeAll(unsigned int* unused)
{
    unsigned int* p;
    unsigned int* e;
    long hr;

    if (unused == 0)
        return 0x80070057;

    p = *(unsigned int**)((char*)unused + 8);
    e = *(unsigned int**)((char*)unused + 0xc);
    hr = 0;

    while (p < e) {
        if (hr == 0) {
            unsigned int* obj = (unsigned int*)*p;
            if (obj != 0) {
                unsigned long cookie = *(unsigned long*)((char*)obj + 0x14);
                if (cookie != 0)
                    hr = CoRevokeClassObject(cookie);
            }
        }
        p++;
    }

    return hr;
}
