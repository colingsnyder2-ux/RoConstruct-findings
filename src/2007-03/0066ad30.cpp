// roc 2007-03 0066ad30  unit: seg_00660000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ad30
//
// 0066ad30  8b442404             mov eax, dword ptr [esp + 4]
// 0066ad34  85c0                 test eax, eax
// 0066ad36  7429                 je 0x66ad61
// 0066ad38  83f8ff               cmp eax, -1
// 0066ad3b  7424                 je 0x66ad61
// 0066ad3d  8a08                 mov cl, byte ptr [eax]
// 0066ad3f  84c9                 test cl, cl
// 0066ad41  8bd0                 mov edx, eax
// 0066ad43  7419                 je 0x66ad5e
// 0066ad45  80f926               cmp cl, 0x26
// 0066ad48  7505                 jne 0x66ad4f
// 0066ad4a  384801               cmp byte ptr [eax + 1], cl
// 0066ad4d  7505                 jne 0x66ad54
// 0066ad4f  880a                 mov byte ptr [edx], cl
// 0066ad51  83c201               add edx, 1
// 0066ad54  8a4801               mov cl, byte ptr [eax + 1]
// 0066ad57  83c001               add eax, 1
// 0066ad5a  84c9                 test cl, cl
// 0066ad5c  75e7                 jne 0x66ad45
// 0066ad5e  c60200               mov byte ptr [edx], 0
// 0066ad61  c3                   ret 
// copied from an identical function in another client (function ?strip_ampersands@ns_ROCX000027@@YAPADPAD@Z)

namespace ns_ROCX000027 {
char* __cdecl strip_ampersands(char* p)
{
    if (p != 0 && p != (char*)-1)
    {
        char* d = p;
        char c = *p;
        if (c != 0)
        {
            do
            {
                if (c != '&' || p[1] == c)
                {
                    *d = c;
                    d++;
                }
                c = p[1];
                p++;
            } while (c != 0);
        }
        *d = 0;
    }
    return p;
}
}
