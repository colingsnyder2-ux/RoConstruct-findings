// from server: 73% by colin
// roc 2007-08 0065b240  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b240
//
// 0065b240  8b442404             mov eax, dword ptr [esp + 4]
// 0065b244  85c0                 test eax, eax
// 0065b246  7c2b                 jl 0x65b273
// 0065b248  3b4108               cmp eax, dword ptr [ecx + 8]
// 0065b24b  7d26                 jge 0x65b273
// 0065b24d  837c240800           cmp dword ptr [esp + 8], 0
// 0065b252  8b4904               mov ecx, dword ptr [ecx + 4]
// 0065b255  56                   push esi
// 0065b256  8d34c1               lea esi, [ecx + eax*8]
// 0065b259  7411                 je 0x65b26c
// 0065b25b  8b4604               mov eax, dword ptr [esi + 4]
// 0065b25e  85c0                 test eax, eax
// 0065b260  740a                 je 0x65b26c
// 0065b262  83c004               add eax, 4
// 0065b265  50                   push eax
// 0065b266  ff15ecd27700         call dword ptr [0x77d2ec]
// 0065b26c  8b4604               mov eax, dword ptr [esi + 4]
// 0065b26f  5e                   pop esi
// 0065b270  c20800               ret 8
// 0065b273  e8a84cfdff           call 0x62ff20

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);

struct VCXTPReportRow
{
    int field0;
    void* field4;
    int field8;
    void* GetAt(int index, int* out);
};

void* VCXTPReportRow::GetAt(int index, int* out)
{
    if (index < 0 || index >= field8)
        return 0;
    char* p = (char*)field4 + index * 8;
    if (out != 0)
    {
        long* ref = (long*)((char*)p + 4);
        if (ref != 0)
            InterlockedIncrement(ref);
    }
    return *(void**)((char*)p + 4);
}
