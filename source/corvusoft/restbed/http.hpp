/*
 * Copyright (c) 2013, 2014, 2015 Corvusoft
 */

#ifndef _RESTBED_HTTP_H
#define _RESTBED_HTTP_H 1

//System Includes
#include <string>
#include <memory>
#include <cstddef>

//Project Includes
#include <corvusoft/restbed/byte.hpp>

//External Includes

//System Namespaces

//Project Namespaces

//External Namespaces

//1. Fix Tests.
//2. Move buffer to request.
//3. Move socket to request.
//4. Link iostream to request.
//5. Http::sync should use Socket.
//6. SSL client.
//x. merge code
//y. transfer encoding client example, examples...


// *Test*
//test fetch on empty body returns eof.
//test fetch on closed socket.
//test keep-alive
//transfer encoding
//response.get_header( int, transform ) methods
//test ssl client
 
namespace restbed
{
    //Forward Declarations
    class Request;
    class Response;
    class SSLSettings;
    
    class Http
    {
        public:
            //Friends
            
            //Definitions
            
            //Constructors
            
            //Functionality
            static std::shared_ptr< const Response > sync( const std::shared_ptr< const Request >& request );

            //static std::shared_ptr< Response > sync( const Request& request, const SSLSettings& settings );
            
            //static void async( const Request& request, const std::function< void ( const std::shared_ptr< const Request >, std::shared_ptr< const Response > ) >& callback );

            //static void async( const Request& request, const SSLSettings& settings, const std::function< void ( const std::shared_ptr< const Request >, std::shared_ptr< const Response > ) >& callback );

            static Bytes fetch( const std::size_t length, const std::shared_ptr< const Response >& response );

            static Bytes fetch( const std::string& delimiter, const std::shared_ptr< const Response >& response );

            //Getters

            //Setters
            
            //Operators
            
            //Properties
            
        protected:
            //Friends
            
            //Definitions
            
            //Constructors
            
            //Functionality
            
            //Getters
            
            //Setters
            
            //Operators
            
            //Properties
            
        private:
            //Friends
            
            //Definitions
            
            //Constructors
            Http( void ) = delete;
            
            virtual ~Http( void ) = delete;

            Http( const Http& original ) = delete;
            
            //Functionality
            static Bytes to_bytes( const Request& request );
            
            //Getters
            
            //Setters
            
            //Operators
            Http& operator =( const Http& value ) = delete;
            
            //Properties
    };
}

#endif  /* _RESTBED_HTTP_H */