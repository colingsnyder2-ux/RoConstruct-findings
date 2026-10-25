// from server: 100% by colin
// roc 2008-06 006582b0  unit: RBX::ArrowButton  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006582b0
//
// 006582b0  6aff                 push -1
// 006582b2  6838be7d00           push 0x7dbe38
// 006582b7  64a100000000         mov eax, dword ptr fs:[0]
// 006582bd  50                   push eax
// 006582be  64892500000000       mov dword ptr fs:[0], esp
// 006582c5  51                   push ecx
// 006582c6  56                   push esi
// 006582c7  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 006582cc  83ec08               sub esp, 8
// 006582cf  8bc4                 mov eax, esp
// 006582d1  668908               mov word ptr [eax], cx
// 006582d4  8b542428             mov edx, dword ptr [esp + 0x28]
// 006582d8  895004               mov dword ptr [eax + 4], edx
// 006582db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006582df  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006582e7  8964240c             mov dword ptr [esp + 0xc], esp
// 006582eb  ff15a4258000         call dword ptr [0x8025a4]
// 006582f1  8b742420             mov esi, dword ptr [esp + 0x20]
// 006582f5  56                   push esi
// 006582f6  e825fdffff           call 0x658020
// 006582fb  668b4c2428           mov cx, word ptr [esp + 0x28]
// 00658300  83c404               add esp, 4
// 00658303  8bc4                 mov eax, esp
// 00658305  668908               mov word ptr [eax], cx
// 00658308  8b542428             mov edx, dword ptr [esp + 0x28]
// 0065830c  895004               mov dword ptr [eax + 4], edx
// 0065830f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00658313  8964240c             mov dword ptr [esp + 0xc], esp
// 00658317  ff15a4258000         call dword ptr [0x8025a4]
// 0065831d  56                   push esi
// 0065831e  e83dfaffff           call 0x657d60
// 00658323  83c40c               add esp, 0xc
// 00658326  8d4c2420             lea ecx, [esp + 0x20]
// 0065832a  ff1564258000         call dword ptr [0x802564]
// 00658330  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00658334  64890d00000000       mov dword ptr fs:[0], ecx
// 0065833b  5e                   pop esi
// 0065833c  83c410               add esp, 0x10
// 0065833f  c3                   ret 

namespace std {
    typedef void (__thiscall *MemberCall)(void*);

    extern MemberCall increfCall;
    extern MemberCall localeDestructorCall;

    class locale {
    public:
        class facet {
        public:
            void _Incref();
        };

        facet* ptr;

        locale(const locale& other);
        __declspec(dllimport) void __thiscall localeDestroy() throw();
        ~locale() throw();
    };

    inline void locale::facet::_Incref()
    {
        increfCall(this);
    }

    inline locale::locale(const locale& other) : ptr(other.ptr)
    {
        ptr->_Incref();
    }

    inline locale::~locale() throw()
    {
        this->localeDestroy();
    }
}

struct Value {
    unsigned short value;
    std::locale loc;
};

void __cdecl first(void*, Value);
void __cdecl second(void*, Value);

void __cdecl function(void* object, Value value)
{
    first(object, value);
    second(object, value);
}
