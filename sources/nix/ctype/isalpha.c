const unsigned char * const _ctype_;

int isalpha(int c)
{ return _ctype_[1+c]&3; }
