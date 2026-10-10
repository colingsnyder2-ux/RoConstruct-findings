// from server: 94% by colin
// roc 2007-08 0054b810  unit: UString_sink::?$stream_buffer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b810
//
// 0054b810  53                   push ebx
// 0054b811  56                   push esi
// 0054b812  57                   push edi
// 0054b813  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0054b817  33f6                 xor esi, esi
// 0054b819  85ff                 test edi, edi
// 0054b81b  8bd9                 mov ebx, ecx
// 0054b81d  7e2b                 jle 0x54b84a
// 0054b81f  55                   push ebp
// 0054b820  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0054b824  8b03                 mov eax, dword ptr [ebx]
// 0054b826  8b00                 mov eax, dword ptr [eax]
// 0054b828  8b4808               mov ecx, dword ptr [eax + 8]
// 0054b82b  8b5104               mov edx, dword ptr [ecx + 4]
// 0054b82e  8b440230             mov eax, dword ptr [edx + eax + 0x30]
// 0054b832  8bcf                 mov ecx, edi
// 0054b834  2bce                 sub ecx, esi
// 0054b836  51                   push ecx
// 0054b837  8d142e               lea edx, [esi + ebp]
// 0054b83a  52                   push edx
// 0054b83b  8bc8                 mov ecx, eax
// 0054b83d  ff1500e67700         call dword ptr [0x77e600]
// 0054b843  03f0                 add esi, eax
// 0054b845  3bf7                 cmp esi, edi
// 0054b847  7cdb                 jl 0x54b824
// 0054b849  5d                   pop ebp
// 0054b84a  5f                   pop edi
// 0054b84b  8bc6                 mov eax, esi
// 0054b84d  5e                   pop esi
// 0054b84e  5b                   pop ebx
// 0054b84f  c20800               ret 8

struct streambuf
{
    int sputn(const char* s, int n);
};

struct UString_sink
{
    void* vtable;
    int write(const char* data, int count);
};

int UString_sink::write(const char* data, int count)
{
    int total = 0;
    if (count > 0)
    {
        while (total < count)
        {
            void* vt = *(void**)this;
            void* p1 = *(void**)vt;
            void* p2 = *(void**)((char*)p1 + 8);
            void* p3 = *(void**)((char*)p2 + 4);
            streambuf* buf = *(streambuf**)((char*)p3 + (int)p1 + 0x30);
            int n = buf->sputn(data + total, count - total);
            total += n;
        }
    }
    return total;
}
