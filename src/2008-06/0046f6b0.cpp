// from server: 42% by colin
// from server: 40% by colin
// roc 2008-06 0046f6b0  unit: RBX::LDraw2Lua::LDrawParser  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f6b0
//
// 0046f6b0  51                   push ecx
// 0046f6b1  53                   push ebx
// 0046f6b2  55                   push ebp
// 0046f6b3  56                   push esi
// 0046f6b4  57                   push edi
// 0046f6b5  8bf9                 mov edi, ecx
// 0046f6b7  8b4730               mov eax, dword ptr [edi + 0x30]
// 0046f6ba  2b472c               sub eax, dword ptr [edi + 0x2c]
// 0046f6bd  8d6f20               lea ebp, [edi + 0x20]
// 0046f6c0  c1f802               sar eax, 2
// 0046f6c3  896c2410             mov dword ptr [esp + 0x10], ebp
// 0046f6c7  85c0                 test eax, eax
// 0046f6c9  0f8643010000         jbe 0x46f812
// 0046f6cf  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046f6d3  68cccb8100           push 0x81cbcc
// 0046f6d8  684ccc8100           push 0x81cc4c
// 0046f6dd  68c8cb8100           push 0x81cbc8
// 0046f6e2  56                   push esi
// 0046f6e3  e868adfdff           call 0x44a450
// 0046f6e8  83c408               add esp, 8
// 0046f6eb  50                   push eax
// 0046f6ec  e85fadfdff           call 0x44a450
// 0046f6f1  83c408               add esp, 8
// 0046f6f4  50                   push eax
// 0046f6f5  e856adfdff           call 0x44a450
// 0046f6fa  83c408               add esp, 8
// 0046f6fd  68cccb8100           push 0x81cbcc
// 0046f702  6828cc8100           push 0x81cc28
// 0046f707  56                   push esi
// 0046f708  e843adfdff           call 0x44a450
// 0046f70d  83c408               add esp, 8
// 0046f710  50                   push eax
// 0046f711  e83aadfdff           call 0x44a450
// 0046f716  68cccb8100           push 0x81cbcc
// 0046f71b  56                   push esi
// 0046f71c  e82fadfdff           call 0x44a450
// 0046f721  83c410               add esp, 0x10
// 0046f724  68cccb8100           push 0x81cbcc
// 0046f729  6814cc8100           push 0x81cc14
// 0046f72e  68c8cb8100           push 0x81cbc8
// 0046f733  56                   push esi
// 0046f734  e817adfdff           call 0x44a450
// 0046f739  83c408               add esp, 8
// 0046f73c  50                   push eax
// 0046f73d  e80eadfdff           call 0x44a450
// 0046f742  83c408               add esp, 8
// 0046f745  50                   push eax
// 0046f746  e805adfdff           call 0x44a450
// 0046f74b  83c408               add esp, 8
#include <intrin.h>





namespace std {
    class string {
    public:
        string();
        string(const char*);
        const char* c_str() const;
    };
}

struct LDrawParser {
    char pad0[0x0c];
    void* vec1_begin;
    void* vec1_end;
    char pad14[0x0c];
    void* vec2_begin;
    void* vec2_end;
    char pad28[0x04];
    void* vec3_begin;
    void* vec3_end;

    void parse(const std::string& name);
    void* getElement(int index);
};

extern "C" std::string* __stdcall string_assign_concat(std::string* dst, const char* src);
extern "C" std::string* __stdcall string_assign_concat2(std::string* dst, const std::string& src);

void LDrawParser::parse(const std::string& name)
{
    int count = (int)(((char*)vec3_end - (char*)vec3_begin) >> 2);
    _ReadWriteBarrier();
    if (count > 0) {
        std::string s1("Get the current workspace");
        std::string s2("local w = game:service(\"Workspace\")");
        std::string s3("Create a new model");
        std::string s4("m = Instance.new(\"Model\")");
        std::string s5("m.Name = \"");
        std::string s6("m.Parent = w");

        std::string tmp;
        string_assign_concat(&tmp, s1.c_str());
        string_assign_concat(&tmp, s2.c_str());
        string_assign_concat(&tmp, s3.c_str());
        string_assign_concat(&tmp, s4.c_str());
        string_assign_concat(&tmp, s5.c_str());
        string_assign_concat2(&tmp, name);
        string_assign_concat(&tmp, "\"");
        string_assign_concat(&tmp, s6.c_str());

        int n = (int)(((char*)vec2_end - (char*)vec2_begin) >> 2);
        for (int i = 0; i < n; ++i) {
            void* elem = getElement(i);
            std::string tmp2;
            string_assign_concat(&tmp2, "\"");
            void** vtbl = *(void***)elem;
            typedef void (__thiscall *Fn)(void*, const std::string&);
            Fn fn = (Fn)vtbl[1];
            fn(elem, tmp);
        }
    }
}
