// from server: 77% by colin
// roc 2007-08 00662640  unit: CXTPReportRecordItemPreview  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662640
//
// 00662640  51                   push ecx
// 00662641  8b01                 mov eax, dword ptr [ecx]
// 00662643  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00662649  56                   push esi
// 0066264a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066264e  56                   push esi
// 0066264f  c744240800000000     mov dword ptr [esp + 8], 0
// 00662657  ffd2                 call edx
// 00662659  8bc6                 mov eax, esi
// 0066265b  5e                   pop esi
// 0066265c  59                   pop ecx
// 0066265d  c20800               ret 8

struct CXTPReportRecordItemPreview {
    int SetPreviewText(const char* text, int unused);
};

int CXTPReportRecordItemPreview::SetPreviewText(const char* text, int unused) {
    (*(void (__thiscall**)(CXTPReportRecordItemPreview*, const char*))(*(int*)this + 0x144))(this, text);
    return (int)text;
}
