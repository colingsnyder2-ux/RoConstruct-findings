// from server: 53% by colin
// roc 2008-06 005f54f0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f54f0
//
// 005f54f0  83ec08               sub esp, 8
// 005f54f3  53                   push ebx
// 005f54f4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005f54f8  56                   push esi
// 005f54f9  8b742418             mov esi, dword ptr [esp + 0x18]
// 005f54fd  8b0e                 mov ecx, dword ptr [esi]
// 005f54ff  8d442408             lea eax, [esp + 8]
// 005f5503  50                   push eax
// 005f5504  885c2418             mov byte ptr [esp + 0x18], bl
// 005f5508  ff1554238000         call dword ptr [0x802354]
// 005f550e  8d4c2415             lea ecx, [esp + 0x15]
// 005f5512  51                   push ecx
// 005f5513  8b4804               mov ecx, dword ptr [eax + 4]
// 005f5516  8d542418             lea edx, [esp + 0x18]
// 005f551a  52                   push edx
// 005f551b  8b10                 mov edx, dword ptr [eax]
// 005f551d  51                   push ecx
// 005f551e  8b0e                 mov ecx, dword ptr [esi]
// 005f5520  52                   push edx
// 005f5521  ff1588258000         call dword ptr [0x802588]
// 005f5527  8d4c2408             lea ecx, [esp + 8]
// 005f552b  8bc3                 mov eax, ebx
// 005f552d  c1f808               sar eax, 8
// 005f5530  51                   push ecx
// 005f5531  8b0e                 mov ecx, dword ptr [esi]
// 005f5533  88442418             mov byte ptr [esp + 0x18], al
// 005f5537  ff1554238000         call dword ptr [0x802354]
// 005f553d  8d542415             lea edx, [esp + 0x15]
// 005f5541  52                   push edx
// 005f5542  8b5004               mov edx, dword ptr [eax + 4]
// 005f5545  8b00                 mov eax, dword ptr [eax]
// 005f5547  8d4c2418             lea ecx, [esp + 0x18]
// 005f554b  51                   push ecx
// 005f554c  8b0e                 mov ecx, dword ptr [esi]
// 005f554e  52                   push edx
// 005f554f  50                   push eax
// 005f5550  ff1588258000         call dword ptr [0x802588]
// 005f5556  8bcb                 mov ecx, ebx
// 005f5558  c1f910               sar ecx, 0x10
// 005f555b  8d542408             lea edx, [esp + 8]
// 005f555f  884c2414             mov byte ptr [esp + 0x14], cl
// 005f5563  8b0e                 mov ecx, dword ptr [esi]
// 005f5565  52                   push edx
// 005f5566  ff1554238000         call dword ptr [0x802354]
// 005f556c  8d4c2415             lea ecx, [esp + 0x15]
// 005f5570  51                   push ecx
// 005f5571  8b4804               mov ecx, dword ptr [eax + 4]
// 005f5574  8d542418             lea edx, [esp + 0x18]
// 005f5578  52                   push edx
// 005f5579  8b10                 mov edx, dword ptr [eax]
// 005f557b  51                   push ecx
// 005f557c  8b0e                 mov ecx, dword ptr [esi]
// 005f557e  52                   push edx
// 005f557f  ff1588258000         call dword ptr [0x802588]
// 005f5585  8b0e                 mov ecx, dword ptr [esi]
// 005f5587  8d442408             lea eax, [esp + 8]
// 005f558b  c1fb18               sar ebx, 0x18
// 005f558e  50                   push eax
// 005f558f  885c2418             mov byte ptr [esp + 0x18], bl
// 005f5593  ff1554238000         call dword ptr [0x802354]
// 005f5599  8d4c2415             lea ecx, [esp + 0x15]
// 005f559d  51                   push ecx
// 005f559e  8b4804               mov ecx, dword ptr [eax + 4]
// 005f55a1  8d542418             lea edx, [esp + 0x18]
// 005f55a5  52                   push edx
// 005f55a6  8b10                 mov edx, dword ptr [eax]
// 005f55a8  51                   push ecx
// 005f55a9  8b0e                 mov ecx, dword ptr [esi]
// 005f55ab  52                   push edx
// 005f55ac  ff1588258000         call dword ptr [0x802588]
// 005f55b2  5e                   pop esi
// 005f55b3  5b                   pop ebx
// 005f55b4  83c408               add esp, 8
// 005f55b7  c3                   ret 

struct String {
    void end(void*);
    void insert(void*, const char*, const char*);
};

extern "C" void __stdcall sub_802354(void*);
extern "C" void __stdcall sub_802588(void*, const char*, const char*);

void func_005f54f0(int value, String* str)
{
    char buf[8];
    char ch;

    ch = (char)value;
    str->end(buf);
    str->insert(buf, &ch, &ch + 1);

    ch = (char)(value >> 8);
    str->end(buf);
    str->insert(buf, &ch, &ch + 1);

    ch = (char)(value >> 16);
    str->end(buf);
    str->insert(buf, &ch, &ch + 1);

    ch = (char)(value >> 24);
    str->end(buf);
    str->insert(buf, &ch, &ch + 1);
}
