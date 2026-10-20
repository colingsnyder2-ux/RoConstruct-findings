// from server: 98% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <string>

struct Text {
    unsigned int padding;
    std::string value;
};

struct Link {
    unsigned int padding;
    Text* text;
};

struct Source {
    unsigned int padding0;
    Text* suffix;
    unsigned int padding1;
    Link* prefix;
};

std::string __stdcall concatenate(const Source* source)
{
    Link* prefix = source->prefix;
    Text* text = prefix->text;
    return (text->value + "Critical Error") + source->suffix->value;
}
