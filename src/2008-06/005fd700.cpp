// from server: 100% by king_originala
// roc 2008-06 005fd700  unit: RBX::Tool  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd700
//
// 005fd700  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fd704  85c0                 test eax, eax
// 005fd706  752f                 jne 0x5fd737
// 005fd708  8b442408             mov eax, dword ptr [esp + 8]
// 005fd70c  85c0                 test eax, eax
// 005fd70e  744c                 je 0x5fd75c
// 005fd710  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd714  8b11                 mov edx, dword ptr [ecx]
// 005fd716  8910                 mov dword ptr [eax], edx
// 005fd718  8b5104               mov edx, dword ptr [ecx + 4]
// 005fd71b  895004               mov dword ptr [eax + 4], edx
// 005fd71e  8b5108               mov edx, dword ptr [ecx + 8]
// 005fd721  895008               mov dword ptr [eax + 8], edx
// 005fd724  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005fd727  89500c               mov dword ptr [eax + 0xc], edx
// 005fd72a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005fd72d  895010               mov dword ptr [eax + 0x10], edx
// 005fd730  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005fd733  894814               mov dword ptr [eax + 0x14], ecx
// 005fd736  c3                   ret 
// 005fd737  83f801               cmp eax, 1
// 005fd73a  7420                 je 0x5fd75c
// 005fd73c  56                   push esi
// 005fd73d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fd741  8b0e                 mov ecx, dword ptr [esi]
// 005fd743  6848899500           push 0x958948
// 005fd748  ff1578288000         call dword ptr [0x802878]
// 005fd74e  0fb6d0               movzx edx, al
// 005fd751  f7da                 neg edx
// 005fd753  1bd2                 sbb edx, edx
// 005fd755  23542408             and edx, dword ptr [esp + 8]
// 005fd759  8916                 mov dword ptr [esi], edx
// 005fd75b  5e                   pop esi
// 005fd75c  c3                   ret 

struct type_info {};

extern const type_info target_type;
extern bool (__thiscall *type_equal)(const type_info*, const type_info&);

union Buffer {
    unsigned int words[6];
    const type_info* type;
    const Buffer* pointer;
};

void __cdecl manage(const Buffer* source, Buffer* destination, int operation)
{
    if (operation == 0) {
        if (destination) {
            destination->words[0] = source->words[0];
            destination->words[1] = source->words[1];
            destination->words[2] = source->words[2];
            destination->words[3] = source->words[3];
            destination->words[4] = source->words[4];
            destination->words[5] = source->words[5];
        }
    } else if (operation != 1) {
        destination->pointer =
            type_equal(destination->type, target_type) ? source : 0;
    }
}
