// roc 2011-06 0085be40  unit: CXTPControlSelector  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085be40
//
// 0085be40  8b442404             mov eax, dword ptr [esp + 4]
// 0085be44  85c0                 test eax, eax
// 0085be46  7425                 je 0x85be6d
// 0085be48  83f8ff               cmp eax, -1
// 0085be4b  7420                 je 0x85be6d
// 0085be4d  8a08                 mov cl, byte ptr [eax]
// 0085be4f  8bd0                 mov edx, eax
// 0085be51  84c9                 test cl, cl
// 0085be53  7415                 je 0x85be6a
// 0085be55  80f926               cmp cl, 0x26
// 0085be58  7505                 jne 0x85be5f
// 0085be5a  384801               cmp byte ptr [eax + 1], cl
// 0085be5d  7503                 jne 0x85be62
// 0085be5f  880a                 mov byte ptr [edx], cl
// 0085be61  42                   inc edx
// 0085be62  8a4801               mov cl, byte ptr [eax + 1]
// 0085be65  40                   inc eax
// 0085be66  84c9                 test cl, cl
// 0085be68  75eb                 jne 0x85be55
// 0085be6a  c60200               mov byte ptr [edx], 0
// 0085be6d  c3                   ret 
// copied from an identical function in another client (function ?strip_ampersands@ns_ROCX000008@@YAPADPAD@Z)

namespace ns_ROCX000008 {
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
