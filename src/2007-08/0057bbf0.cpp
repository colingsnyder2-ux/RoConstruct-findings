// from server: 90% by colin
// roc 2007-08 0057bbf0  unit: RBX::Workspace  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bbf0
//
// 0057bbf0  8b442408             mov eax, dword ptr [esp + 8]
// 0057bbf4  83f802               cmp eax, 2
// 0057bbf7  7519                 jne 0x57bc12
// 0057bbf9  56                   push esi
// 0057bbfa  8b742408             mov esi, dword ptr [esp + 8]
// 0057bbfe  56                   push esi
// 0057bbff  b9581b8a00           mov ecx, 0x8a1b58
// 0057bc04  ff1508e77700         call dword ptr [0x77e708]
// 0057bc0a  f6d8                 neg al
// 0057bc0c  1bc0                 sbb eax, eax
// 0057bc0e  23c6                 and eax, esi
// 0057bc10  5e                   pop esi
// 0057bc11  c3                   ret 
// 0057bc12  85c0                 test eax, eax
// 0057bc14  7529                 jne 0x57bc3f
// 0057bc16  6a10                 push 0x10
// 0057bc18  e8d9420b00           call 0x62fef6
// 0057bc1d  83c404               add esp, 4
// 0057bc20  85c0                 test eax, eax
// 0057bc22  742a                 je 0x57bc4e
// 0057bc24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057bc28  8b11                 mov edx, dword ptr [ecx]
// 0057bc2a  8910                 mov dword ptr [eax], edx
// 0057bc2c  8b5104               mov edx, dword ptr [ecx + 4]
// 0057bc2f  895004               mov dword ptr [eax + 4], edx
// 0057bc32  8b5108               mov edx, dword ptr [ecx + 8]
// 0057bc35  895008               mov dword ptr [eax + 8], edx
// 0057bc38  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057bc3b  89480c               mov dword ptr [eax + 0xc], ecx
// 0057bc3e  c3                   ret 
// 0057bc3f  8b542404             mov edx, dword ptr [esp + 4]
// 0057bc43  52                   push edx
// 0057bc44  e819400b00           call 0x62fc62
// 0057bc49  83c404               add esp, 4
// 0057bc4c  33c0                 xor eax, eax
// 0057bc4e  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info type_info_008a1b58;
extern void* op_new(unsigned int);
extern void op_delete(void*);

void* func_0057bbf0(void* self, int mode, void* arg)
{
    if (mode == 2) {
        void* p = arg;
        bool same = type_info_008a1b58.operator==(*(const type_info*)p);
        return same ? 0 : p;
    }
    if (mode == 0) {
        void* mem = op_new(0x10);
        if (mem) {
            *(int*)((char*)mem + 0) = *(int*)((char*)arg + 0);
            *(int*)((char*)mem + 4) = *(int*)((char*)arg + 4);
            *(int*)((char*)mem + 8) = *(int*)((char*)arg + 8);
            *(int*)((char*)mem + 12) = *(int*)((char*)arg + 12);
            return mem;
        }
        return 0;
    }
    op_delete(arg);
    return 0;
}
