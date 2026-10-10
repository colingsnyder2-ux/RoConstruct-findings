// from server: 64% by atomic.potato
struct PasteVerb
{
    PasteVerb();
};

extern "C" void __stdcall construct_string(void *, const char *);

PasteVerb::PasteVerb()
{
    construct_string((char *)this + 8, "RBXAuthenticationNegotiation:");
}
