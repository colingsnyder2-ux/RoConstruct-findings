// from server: 64% by atomic.potato
extern "C" void construct_string(void*, const char*);

extern const char true_string[];
extern const char false_string[];

void* func_00743da0(void* unused, void* result, const char* value)
{
    const char* text = value[0] ? true_string : false_string;
    construct_string(result, text);
    return result;
}
