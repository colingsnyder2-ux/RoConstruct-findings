// from server: 39% by tester
struct LDrawParser {
    void parse();
};

extern "C" void __stdcall sub_77E698(void*);
extern "C" void __cdecl sub_4024C0(void*, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);

void LDrawParser::parse()
{
    char buf[68];
    void* p;

    sub_77E698(buf);
    sub_4024C0(&p, buf);
    sub_630B9E(&p, buf);
}
