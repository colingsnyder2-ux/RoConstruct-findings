// from server: 79% by colin
// roc 2007-08 006d1780  unit: CXTPReportInplaceControl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d1780
//
// 006d1780  8b442404             mov eax, dword ptr [esp + 4]
// 006d1784  83f826               cmp eax, 0x26
// 006d1787  56                   push esi
// 006d1788  8bf1                 mov esi, ecx
// 006d178a  7405                 je 0x6d1791
// 006d178c  83f828               cmp eax, 0x28
// 006d178f  752a                 jne 0x6d17bb
// 006d1791  8b4658               mov eax, dword ptr [esi + 0x58]
// 006d1794  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 006d179a  83780800             cmp dword ptr [eax + 8], 0
// 006d179e  7e1b                 jle 0x6d17bb
// 006d17a0  8b4804               mov ecx, dword ptr [eax + 4]
// 006d17a3  8b01                 mov eax, dword ptr [ecx]
// 006d17a5  8b5064               mov edx, dword ptr [eax + 0x64]
// 006d17a8  3b5664               cmp edx, dword ptr [esi + 0x64]
// 006d17ab  750e                 jne 0x6d17bb
// 006d17ad  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006d17b0  8b11                 mov edx, dword ptr [ecx]
// 006d17b2  50                   push eax
// 006d17b3  8b8234010000         mov eax, dword ptr [edx + 0x134]
// 006d17b9  ffd0                 call eax
// 006d17bb  8bce                 mov ecx, esi
// 006d17bd  e87ceaf5ff           call 0x63023e
// 006d17c2  5e                   pop esi
// 006d17c3  c20c00               ret 0xc

struct CXTPReportInplaceControl {
    char pad[0x58];
    void* field_58;
    char pad2[0x64 - 0x5c];
    void* field_64;
    void OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags);
};

void CXTPReportInplaceControl::OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags)
{
    if (nChar == 0x26 || nChar == 0x28)
    {
        void* p = *(void**)((char*)field_58 + 0x1a4);
        if (*(int*)((char*)p + 8) > 0)
        {
            void* q = *(void**)((char*)p + 4);
            void** vt = *(void***)q;
            if (*(void**)((char*)vt + 0x64) == field_64)
            {
                void** vt2 = *(void***)field_64;
                void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vt2 + 0x134);
                fn(field_64, q);
            }
        }
    }
    ((void (__thiscall*)(void*))0x63023e)(this);
}
