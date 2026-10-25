// from server: 100% by colin
// roc 2008-06 0060a300  unit: VAuthoringSettings::?$BoundPropGetSet  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a300
//
// 0060a300  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060a304  85c0                 test eax, eax
// 0060a306  7523                 jne 0x60a32b
// 0060a308  8b442408             mov eax, dword ptr [esp + 8]
// 0060a30c  85c0                 test eax, eax
// 0060a30e  7440                 je 0x60a350
// 0060a310  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060a314  8b11                 mov edx, dword ptr [ecx]
// 0060a316  8910                 mov dword ptr [eax], edx
// 0060a318  8b5104               mov edx, dword ptr [ecx + 4]
// 0060a31b  895004               mov dword ptr [eax + 4], edx
// 0060a31e  8b5108               mov edx, dword ptr [ecx + 8]
// 0060a321  895008               mov dword ptr [eax + 8], edx
// 0060a324  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0060a327  89480c               mov dword ptr [eax + 0xc], ecx
// 0060a32a  c3                   ret 
// 0060a32b  83f801               cmp eax, 1
// 0060a32e  7420                 je 0x60a350
// 0060a330  56                   push esi
// 0060a331  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060a335  8b0e                 mov ecx, dword ptr [esi]
// 0060a337  68f89a9500           push 0x959af8
// 0060a33c  ff1578288000         call dword ptr [0x802878]
// 0060a342  0fb6d0               movzx edx, al
// 0060a345  f7da                 neg edx
// 0060a347  1bd2                 sbb edx, edx
// 0060a349  23542408             and edx, dword ptr [esp + 8]
// 0060a34d  8916                 mov dword ptr [esi], edx
// 0060a34f  5e                   pop esi
// 0060a350  c3                   ret 

struct TypeInfo {};

extern TypeInfo target_type;
extern "C" bool (__thiscall *type_equal)(
    const TypeInfo *, const TypeInfo *);

union Buffer {
    unsigned int words[4];
    const TypeInfo *type;
    const Buffer *object;
};

void __cdecl f(const Buffer *source, Buffer *destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        destination->object =
            type_equal(destination->type, &target_type) ? source : 0;
    }
}
