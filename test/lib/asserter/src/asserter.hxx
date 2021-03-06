// /////////////////////////////////////////////////////////////////////////////////////////////
// // asserter_t
// /////////////////////////////////////////////////////////////////////////////////////////////
template <class U>
const asserter_t& asserter_t::print_current_val(const U& value, const char* message) const
{
    std::cout << message << ": " << value << std::endl;
    return *this;
}
